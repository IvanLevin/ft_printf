
#include "ft_printf.h"

static  int     extra_rigth_d_two(char *arr_1, char *arr_d, long long len, t_lists *list)
{
   int  i;
   int  j;

   i = 0;
   j = 0;
   if (list->plus == 1 && *arr_d != '-')
       len--;
   while (len--)
       arr_1[i++] = ' ';
   if (list->plus == 1 && *arr_d != '-')
       arr_1[i++] = '+';
   while (arr_d[j])
       arr_1[i++] = arr_d[j++];
    return (i);
}

static  int     extra_rigth_d(char *arr_1, char *arr_d, long long len, t_lists *list)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    if ((list->plus == 1 && *arr_d == '-') || *arr_d == '-')
    {
        arr_1[i++] = '-';
        j++;
    }
    if (list->plus == 1 && *arr_d != '-')
    {
        arr_1[i++] = '+';
        len--;
        j++;
    }
    if(!list->dot)
        while (len--)
            arr_1[i++] = '0';
    else
        while (len--)
            arr_1[i++] = ' ';
    while (arr_d[j])
        arr_1[i++] = arr_d[j++];
    return (i);
}

int     d_minus_right(char *arr_1, char *arr_d, long long len, t_lists *list)
{
    int     i;

    i = 0;
    len = (long long)list->width - (long long)ft_strlen(arr_d);
    if (list->zero == 1)
        i = extra_rigth_d(arr_1, arr_d, len, list);
    else if (list->zero == 0)
        i = extra_rigth_d_two(arr_1, arr_d, len, list);
    return (i);
}

int     d_minus_left(char *arr_1, char *arr_d, long long len, t_lists *list)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    if ((list->plus == 1 && list->space == 1) \
    || (list->plus == 1 && list->space == 0))
    {
        arr_1[i++] = '+';
        arr_d++;
    }
    else if (list->space == 1 && list->plus == 0 && *arr_d != '-')
    {
        arr_1[i++] = ' ';
        len--;
    }
    while (arr_d[j])
        arr_1[i++] = arr_d[j++];
    while (len--)
        arr_1[i++] = ' ';
    return (i);
}
