#include "ft_printf.h"


int ft_printf(const char *format, ...)
{
	va_list	args;

	va_start (args, format);
	ft_strchr(format, '%');
}