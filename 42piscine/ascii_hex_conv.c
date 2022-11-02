void	hexconverter(char c)
{
	unsigned char	a;
	unsigned char	b;
	char	*base;

	base = "0123456789abcdef";
	a = c % 16;
	ft_putchar('\\');
	c = c / 16;
	if (c != 0)
	{
		b = c % 16;
		ft_putchar(base[b]);
		ft_putchar(base[a]);
	}
	else
	{
		ft_putchar(base[0]);
		ft_putchar(base[a]);
	}
}
