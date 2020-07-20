#include <stdio.h>
	#include <stdarg.h>
	#include <string.h>
	#include <stdlib.h>

	void	*ft_print_memory(void *addr, unsigned int size);

	void printmsg(const char *msg, ...)
	{
		char *newstr = (char *)malloc(strlen(msg) + 2);
		strcpy(newstr, msg);
		strcat(newstr, "\n");

		va_list args;
		va_start(args, msg);
		vprintf(newstr, args);
		va_end(args);
		// printf("%s\n", msg);
		free(newstr);
	}

	void printline()
	{
		printf("\n------------------------------------------------------------\n");
	}

	void print_testing(const char *code)
	{
		printmsg("\n## testing code :");
		printf("%s", code);
	}

	int main()
	{
			unsigned char a[256];
	for(int i=0;i<256;i++)
	{
		a[i] = i+1;
	}

	ft_print_memory(a, 251);
	ft_print_memory(a, 24);
	ft_print_memory(a, 0);
	return (0);
	}

	
