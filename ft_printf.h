#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_format(va_list args, const char format);
int	ft_char(int c);
int	ft_str(char *str);
int	ft_percent(void);
int	ft_nbr(int n);
int	ft_unsigned(unsigned int n);
int	ft_hex(unsigned int num, const char format);
int	ft_ptr(unsigned long ptr);
int	ft_ptr_hex(unsigned long num);

#endif
