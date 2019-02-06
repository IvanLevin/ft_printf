

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define PLUS '+'
# define MINUS '-'
# define SPACE ' '
# define LATTICE '#'
# define ZERO '0'

#include "libft/includes/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct	s_lists
{
	char	spec;		// спецификатор
    int	    len;		// для сохранения выведенных байт
	int		minus;		// сохранения флага '-'
	int		zero;		// сохранения флага '0'
	char	flag[5];
	int     space;
	int     plus;
	int 	width;		// сохранение ширины поля
    int		precision;	// сохранение точности
	char	mod;		// модификатор спецификатора
						// [h, hh = G, l, ll = K, L]
}				t_lists;

int     	ft_printf(const char *argv, ...);
void	    initialize(t_lists *list);
char   	 	*parsing(char *argv, va_list ap, t_lists *list);
char		*ft_flag(char *argv, t_lists *list);
void    	search_flag(char *argv, int len, t_lists *list);
char		*ft_width(char *argv, va_list ap, t_lists *list);
char		*ft_accuracy(char *argv, va_list ap, t_lists *list);
char    	*ft_modifier(char *argv, t_lists *list);
int         data_types(char *argv, va_list ap, t_lists *list);
int			space_amount(t_lists *list, int len);
int			fill_space(int space, char *tmp, int tmp_i, t_lists *list);
void		ft_printf_s(char *str, t_lists *list);
void		ft_print_free(char *str, t_lists *list, int max);
void        ft_printf_c(t_lists *list, va_list ap);
int         print_c(char *first, char *second, int i);
void        ft_printf_d(t_lists *list, char *specifier, va_list ap);
void        print_d_or_i(t_lists *list, char *specifier, va_list ap);
void    	print_d_i(t_lists *list,  va_list ap);
int         fill_zero(char *arr, t_lists *list, char *ap, size_t max);
int         flag_and_width_d(t_lists *list, char *ar1, char *ar2, size_t len);
int         pr_right_d(char *arr, char *arr2, t_lists *list);
int         pr_left_d(char *arr, char *arr2, t_lists *list);
int         d_minus_left(char *arr_1, char *arr_d, size_t len, t_lists *list);
int         d_minus_right(char *arr_1, char *arr_d, size_t len, t_lists *list);
int         extra_rigth_d(char *arr_1, char *arr_d, size_t len, t_lists *list);
void    	ft_printf_x(long long n, t_lists *list);

#endif
