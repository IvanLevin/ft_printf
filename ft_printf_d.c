

#include "ft_printf.h"

void    print_d_or_i(t_lists *list, char *specifier, va_list ap)
{


}

void    ft_printf_d(t_lists *list, char *specifier, va_list ap)
{
    if (*specifier == 'd' || *specifier == 'i')
        print_d_or_i(list, specifier, ap);
//    else
//        print_u(list, specifier);
}