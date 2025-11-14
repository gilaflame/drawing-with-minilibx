#!/bin/sh

cc $1 \
	minilibx-linux/libmlx_Linux.a \
	-Lminilibx-linux \
	-lXext -lX11 -lm -lz \
	-o run

echo "compiling $1.."

