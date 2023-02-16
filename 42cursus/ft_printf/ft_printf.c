#include <stdarg.h>

int	ft_format(va_list ap, const char type)
{
		/*Prints a single character*/
	if (*type == 'c')
		ft_putchar(*type);
	/*Prints a string*/
	else if (*type == 's')
		ft_putsr();
	/*Prints an integer value after conversion*/
	else if (*type == 'i')
		ft_itoa();


	return();
}

int	ft_printf(const char *frame, ...) /*recebe a string e verifica os valores que v`ao ser usados para is buscar os argumentos*/
{
	va_list	ap;
	int	i = 0;

	va_start(ap, frame);
	while (frame[i])
	{
		if (frame[i] == '%')
			ft_format(ap, frame[i+1]);
	}


}
