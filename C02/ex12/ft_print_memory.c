#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_printaddr(int64_t addr)
{
	const int	size = 17;
	char hex[size + 1] = {0};
	int index = size - 1;
	int64_t temp = 0;
	hex[size] = '\0';

	while (index != 0)
	{
		temp = addr % 16;
		if (temp < 10)
			hex[index] = temp + 48;
		else
			hex[index] = temp + 87;
		addr = addr / 16;
		index--;
	}
	while (index <= 16)
		ft_putchar(hex[index++]);
	write(1, ": ", 2);
}

void *ft_print_memory(void *addr, unsigned int size)
{
	// Not Implemented =(
}

int main(void)
{
	int var = 0;
	int64_t addr = (int64_t)&var;
	ft_printaddr(addr);
}
