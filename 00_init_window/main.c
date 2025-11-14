#include "../minilibx-linux/mlx.h"
#include <stdlib.h>
#include <unistd.h>

typedef struct s_mlx
{
	void	*connection;
	void	*window;
}	t_mlx;

int	close_window(t_mlx *mlx)
{
	mlx_destroy_window(mlx->connection, mlx->window);
	mlx_destroy_display(mlx->connection);
	free(mlx->connection);
	exit(1);
}

int	handle_key(int keycode, t_mlx *mlx)
{
	if (keycode == 65307) // ESC
		close_window(mlx);
	return (0);
}

int main(void)
{
	t_mlx	mlx;

	mlx.connection = mlx_init();
	if (!mlx.connection)
		return (1);

	mlx.window = mlx_new_window(mlx.connection, 400, 400, "My first Window");
	if (!mlx.window)
		return (1);

	mlx_hook(mlx.window, 17, 0, close_window, &mlx); // Event 17 (click on the X)
	mlx_key_hook(mlx.window, handle_key, &mlx);

	mlx_loop(mlx.connection);
}
