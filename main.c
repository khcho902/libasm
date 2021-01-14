#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);

int main(void)
{
	char *str;

	printf("===== ft_strlen =====\n");
	str = "";
	printf("strlen    : %zu\nft_strlen : %zu\n", strlen(str), ft_strlen(str));
	str = "a";
	printf("strlen    : %zu\nft_strlen : %zu\n", strlen(str), ft_strlen(str));
	str = "ab";
	printf("strlen    : %zu\nft_strlen : %zu\n", strlen(str), ft_strlen(str));
	str = "abc";
	printf("strlen    : %zu\nft_strlen : %zu\n", strlen(str), ft_strlen(str));
	str = "abcde";
	printf("strlen    : %zu\nft_strlen : %zu\n", strlen(str), ft_strlen(str));
	str = "a       b";
	printf("strlen    : %zu\nft_strlen : %zu\n", strlen(str), ft_strlen(str));
	str = "a         ";
	printf("strlen    : %zu\nft_strlen : %zu\n", strlen(str), ft_strlen(str));
	str = "    a   ";
	printf("strlen    : %zu\nft_strlen : %zu\n", strlen(str), ft_strlen(str));
	str = "                          ";
	printf("strlen    : %zu\nft_strlen : %zu\n", strlen(str), ft_strlen(str));



	return (0);
}
