#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c,1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb /10);
		ft_putnbr(nb %10);
	}
	else 
	{
		ft_putchar(nb + '0');
	}
}

int ft_atoi(const char *str)
{
    int i;
    int ret;
    int neg;

    i = 0;
    neg = 0;
    ret = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
        i++;
    if (str[i] == '-')
    {
        neg = 1;
    }
    if (str[i] == '-' || str[i] == '+')
    {
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        ret*= 10;
        ret += str[i] - '0';
        i++;
    }
    if (neg)
        return (-ret);
    return (ret);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putchar('\n');
	}
	else
	{
		int nb;
		int i;

		i = 1;
		nb = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			ft_putchar(' ');
			ft_putchar('x');
			ft_putchar(' ');
			ft_putnbr(nb);
			ft_putchar(' ');
			ft_putchar('=');
			ft_putchar(' ');
			ft_putnbr(i * nb);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
