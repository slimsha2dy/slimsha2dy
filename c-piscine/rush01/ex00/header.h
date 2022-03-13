#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <stdlib.h>

int		*int_inputarr(char *str);
int		scrapper_setting(int *input);
int		ft_check_input(int *input);
int		same_col_check(int *skymap);
int		same_row_check(int *skymap);
int		valid_one(int *input);
int		vaild_two(int *input);
int		valid_four(int *input);
int		valid_sum(int *input);
int		valid_check(int *input);
int		check_height(int *skymap, int *input);
int		check_col_up(int *skymap, int *input);
int		check_col_down(int *skymap, int *input);
int		check_row_left(int *skymap, int *input);
int		check_row_right(int *skymap, int *input);
void	col_up_set(int *skymap, int *input);
void	col_down_set(int *skymap, int *input);
void	row_left_set(int *skymap, int *input);
void	row_right_set(int *skymap, int *input);
void	recursive(int *skymap, int level, int *input, int *error);
void	putarr(int *skymap, int *error);

#endif
