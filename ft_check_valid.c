

#include "ft_printf.h"

void    search_flag(char *argv, int len, t_lists *list)
{
    int     j;

    j = 0;
    if (argv)
    {
        if ((list->flag[j] = ft_len_strchr(argv, PLUS, len)))
        {
            list->plus = 1;
            j++;
        }
        if ((list->flag[j] = ft_len_strchr(argv, MINUS, len)))
        {
        	list->minus = 1;
            j++;
        }
        if ((list->flag[j] = ft_len_strchr(argv, SPACE, len)))
        {
            list->space = 1;
            j++;
        }
        if ((list->flag[j] = ft_len_strchr(argv, LATTICE, len)))
        {
            list->sharp = 2;
            j++;
        }
        if ((list->flag[j] = ft_len_strchr(argv, ZERO, len)))
			list->zero = 1;
    }
}

char    *ft_flag(char *argv, t_lists *list)
{
    int     i;
    int     len;

    i = 0;
    len = 0;
    while (argv[i] == '-' || argv[i] == '+' || argv[i] == ' ' || \
			argv[i] == '#' || argv[i] == '0')
    {
        len++;
        i++;
    }
    search_flag(argv, len, list);
    while (*argv == '-' || *argv == '+' || *argv == ' ' || \
			*argv == '#' || *argv == '0')
        argv++;
    return (argv);
}

char	*ft_width(char *argv, va_list ap, t_lists *list)
{
    size_t  len;
    char *tmp;

    tmp = NULL;
    if (*argv == '*')
    {
        list->width = va_arg(ap, int);
        argv++;
        return (argv);
    }
    else if (*argv >= '0' && *argv <= '9')
    {
        len = 0;
        while (argv[len] >= '0' && argv[len] <= '9')
            len++;
        tmp = ft_strnew(len);
        list->width = ft_atoi(ft_strncpy(tmp, argv, len));
        while (*argv >= '0' && *argv <= '9')
            argv++;
        return (argv);
    }
    return (argv);
}

char	*ft_accuracy(char *argv, va_list ap, t_lists *list)
{
    size_t  len;

    if (*argv == '.')
    {
        argv++;
        if (*argv != '*' && !(*argv >= '0' && *argv <= '9'))
            list->dot = 1;
        else if (*argv == '*')
        {
            list->precision = va_arg(ap, int);
            argv++;
            return (argv);
        }
        else if (*argv >= '0' && *argv <= '9')
        {
            len = 0;
            while (argv[len] >= '0' && argv[len] <= '9')
                len++;
            list->precision = ft_atoi(ft_strncpy(ft_strnew(len), argv, len));
            while (*argv >= '0' && *argv <= '9')
                argv++;
            return (argv);
        }
    }
    return (argv);
}

char    *ft_modifier(char *argv, t_lists *list)
{
    list->mod = *argv;
    argv++;
    if (list->mod == 'h' && *argv == 'h')
    {
        argv++;
        list->mod = 'G';
    }
    else if (list->mod == 'l' && *argv == 'l')
    {
        argv++;
        list->mod = 'K';
    }
    return (argv);
}
