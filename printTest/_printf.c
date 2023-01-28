#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf2(const char *format, ...)
{
	va_list args;
	int length = 0;
	int i = 0;

	if (format==NULL)
		return (-1);
	
	va_start(args, format);

	while (format && format[i])
	{
		length+=write(1, &format[i], 1);
		i++;
	}
	
	return length;
}

void main(void)
{
	char *charto;
	charto="School";
	printf("%d",_printf2("%d",charto));
}

