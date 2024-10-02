#ifndef PARSING_H
# define PARSING_H

# include "cub3d.h"

# ifndef BUFFER_SIZE 
#  define BUFFER_SIZE 42
# endif

# define MAP_EXTENSION ".cub"
# define N_TEXTURES 4
# define N_COLORS 2
# define NO_COLOR -1

typedef struct s_game
{
	char		*north_path;
	char		*south_path;
	char		*west_path;
	char		*east_path;
    int         floor_color;
    int         ceiling_color;
    char		**map;
	int			n_cols;
	int			n_rows;
}				t_game;

// parsing/get_next_line.c
char	*get_next_line(int fd);

// parsing/checking.c
void	check_id(char *str);
int		can_open(char *file);
int		is_format(char *str, char *ext);
void	handle_error(char *str);
void	check_args(int argc, char **argv);

// parsing/map_parsing.c
void	find_map_dim(int fd, t_game *game);

// parsing/parsing_utils.c
int			is_space(int c);
char		*trim_end_spaces(char *str);
int			return_rgb(char *line);

// parsing/parsing.c
t_game		*parse(int argc, char **argv);

//parsing/fd_into_array.c
char	**fd_into_array(char *argv_1);
void	free_array(char **array);

//parsing/fd_into_array.c
char	**fd_into_array(char *argv_1);
void	free_array(char **array);

#endif