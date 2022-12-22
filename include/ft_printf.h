#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#if _WIN32
    #include <io.h>
#else
    #include <unistd.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void	ft_putchar(char *info);
void    ft_putstring(char *info);
int     ft_putint(int n);
int		ft_putpointer(int info);
int		ft_putNSint(unsigned int info);
// int		ft_puthex(va_list info, const char format);

int		ft_printf(const char *format, ...);
int		ft_formats(va_list args, const char format);


int     func_len(int n);
char    *ft_itoa(int n);


#endif