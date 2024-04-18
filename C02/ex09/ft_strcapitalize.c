int is_calpha(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int is_alpha(char c)
{
	return (c >= 'a' && c <= 'z');
}

int is_num(char c)
{
	return (c >= '0' && c <= '9');
}

char *ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]))
			str[i++] -= 32;
		if (is_calpha(str[i]))
			i++;
		while (str[i] != '\0' && (is_alpha(str[i]) || 
								  is_num(str[i]) || 
								  is_calpha(str[i])))
		{
			if (is_calpha(str[i]))
				str[i] += 32;
			i++;
		}
		i++;
	}
	return (str);
}

// // Test zone //

// #include <stdio.h>

// int main()
// {	
// 	char tst[] = {"HELLO"};
// 	char *str = ft_strcapitalize(&tst);
// 	printf("%s \n", str);
	
// 	return 0;
// }
