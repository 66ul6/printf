#include "ft_printf.h"

int	ft_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_percent(void)
{
	write(1, "%", 1);
	return (1);
}

int	ft_nbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		len += ft_char('-');
		n = -n;
	}
	if (n > 9)
	{
		len += ft_nbr(n / 10);
		len += ft_nbr(n % 10);
	}
	else
		len += ft_char(n + '0');
	return (len);
}

int	ft_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
	{
		len += ft_unsigned(n / 10);
		len += ft_unsigned(n % 10);
	}
	else
		len += ft_char(n + '0');
	return (len);
}
