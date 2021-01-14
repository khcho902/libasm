#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);

int main(void)
{
	char	*str1;
	char	*str2;
	char	dst1[100];
	char	dst2[100];

	printf("===== ft_strlen =====\n");
	str1 = "";
	printf("strlen    : %zu\nft_strlen : %zu\n\n", strlen(str1), ft_strlen(str1));

	str1 = "a";
	printf("strlen    : %zu\nft_strlen : %zu\n\n", strlen(str1), ft_strlen(str1));

	str1 = "abcde";
	printf("strlen    : %zu\nft_strlen : %zu\n\n", strlen(str1), ft_strlen(str1));

	str1 = "a         ";
	printf("strlen    : %zu\nft_strlen : %zu\n\n", strlen(str1), ft_strlen(str1));

	str1 = "                          ";
	printf("strlen    : %zu\nft_strlen : %zu\n\n", strlen(str1), ft_strlen(str1));
	

	printf("\n");
	printf("===== ft_strcpy =====\n");
	
	str1 = "";
	memset(dst1, 0, 100);
	memset(dst2, 0, 100);
	strcpy(dst1, str1);
	ft_strcpy(dst2, str1);
	printf("strcpy    : |%s|\nft_strcpy : |%s|\n\n", dst1, dst2);
	
	str1 = "hello world";
	memset(dst1, 0, 100);
	memset(dst2, 0, 100);
	strcpy(dst1, str1);
	ft_strcpy(dst2, str1);
	printf("strcpy    : |%s|\nft_strcpy : |%s|\n\n", dst1, dst2);
	
	str1 = "   aaa    a";
	memset(dst1, 0, 100);
	memset(dst2, 0, 100);
	strcpy(dst1, str1);
	ft_strcpy(dst2, str1);
	printf("strcpy    : |%s|\nft_strcpy : |%s|\n\n", dst1, dst2);
	
	str1 = "aaaaaaaaaaaaaaaaaaaaaaaaaaa   ";
	memset(dst1, 0, 100);
	memset(dst2, 0, 100);
	strcpy(dst1, str1);
	ft_strcpy(dst2, str1);
	printf("strcpy    : |%s|\nft_strcpy : |%s|\n\n", dst1, dst2);

	str1 = " #$&#*$*@*$*@&$&#^#^@@!@$%^&&^%$";
	memset(dst1, 0, 100);
	memset(dst2, 0, 100);
	strcpy(dst1, str1);
	ft_strcpy(dst2, str1);
	printf("strcpy    : |%s|\nft_strcpy : |%s|\n\n", dst1, dst2);



	printf("\n");
	printf("===== ft_strcmp =====\n");
	
	str1 = "";
	str2 = "";
	printf("strcmp    : %d\nft_strcmp : %d\n\n", strcmp(str1, str2), ft_strcmp(str1, str2));

	str1 = "abcde";
	str2 = "abcde";
	printf("strcmp    : %d\nft_strcmp : %d\n\n", strcmp(str1, str2), ft_strcmp(str1, str2));

	str1 = "aaaaadeee";
	str2 = "bdsdd";
	printf("strcmp    : %d\nft_strcmp : %d\n\n", strcmp(str1, str2), ft_strcmp(str1, str2));

	str1 = "aaad";
	str2 = "aaac";
	printf("strcmp    : %d\nft_strcmp : %d\n\n", strcmp(str1, str2), ft_strcmp(str1, str2));

	str1 = "aaa";
	str2 = "aaab";
	printf("strcmp    : %d\nft_strcmp : %d\n\n", strcmp(str1, str2), ft_strcmp(str1, str2));

	return (0);
}
