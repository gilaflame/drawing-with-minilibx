# 00_init_window

## mlx_init()
    mlx_new_window() → Creates a new window and returns a pointer to it.
    
## mlx_new_window(mlx_ptr, width, height, "title")
    Creates a new window and returns a pointer to it

## mlx_hook(... 17 ...)
    Registers a function to handle the window close event (event 17).

## mlx_key_hook(window, function, param)
    Registers a function that will be called whenever a key is pressed.

## mlx_loop(mlx_ptr)
    Starts the MLX event loop; keeps the window open and processes user input.
    
## mlx_destroy_window(mlx_ptr, win_ptr) 
    Destroys the specified window.

## mlx_destroy_display(mlx_ptr)
    Closes the display connection created by MLX.

## free(mlx_ptr)
    Free the connection structure allocated by *mlx_init()*
