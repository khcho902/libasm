#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);

int main(void)
{
	char	*str;
	char	dst1[100];
	char	dst2[100];

	printf("===== ft_strlen =====\n");
	str = "";
	printf("strlen    : %zu\nft_strlen : %zu\n\n", strlen(str), ft_strlen(str));

	str = "a";
	printf("strlen    : %zu\nft_strlen : %zu\n\n", strlen(str), ft_strlen(str));

	str = "abcde";
	printf("strlen    : %zu\nft_strlen : %zu\n\n", strlen(str), ft_strlen(str));

	str = "a         ";
	printf("strlen    : %zu\nft_strlen : %zu\n\n", strlen(str), ft_strlen(str));

	str = "                          ";
	printf("strlen    : %zu\nft_strlen : %zu\n\n", strlen(str), ft_strlen(str));
	

	printf("\n");
	printf("===== ft_strcpy =====\n");
	
	str = "";
	memset(dst1, 0, 100);
	memset(dst2, 0, 100);
	strcpy(dst1, str);
	ft_strcpy(dst2, str);
	printf("strcpy    : |%s|\nft_strcpy : |%s|\n\n", dst1, dst2);
	
	str = "hello world";
	memset(dst1, 0, 100);
	memset(dst2, 0, 100);
	strcpy(dst1, str);
	ft_strcpy(dst2, str);
	printf("strcpy    : |%s|\nft_strcpy : |%s|\n\n", dst1, dst2);
	
	str = "   aaa    a";
	memset(dst1, 0, 100);
	memset(dst2, 0, 100);
	strcpy(dst1, str);
	ft_strcpy(dst2, str);
	printf("strcpy    : |%s|\nft_strcpy : |%s|\n\n", dst1, dst2);
	
	str = "aaaaaaaaaaaaaaaaaaaaaaaaaaa   ";
	memset(dst1, 0, 100);
	memset(dst2, 0, 100);
	strcpy(dst1, str);
	ft_strcpy(dst2, str);
	printf("strcpy    : |%s|\nft_strcpy : |%s|\n\n", dst1, dst2);

	str = " #$&#*$*@*$*@&$&#^#^@@!@$%^&&^%$";
	memset(dst1, 0, 100);
	memset(dst2, 0, 100);
	strcpy(dst1, str);
	ft_strcpy(dst2, str);
	printf("strcpy    : |%s|\nft_strcpy : |%s|\n\n", dst1, dst2);


	return (0);
}
