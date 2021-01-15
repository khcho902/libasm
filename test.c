#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/errno.h>

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t ft_read(int fildes, void *buf, size_t nbyte);
char	*ft_strdup(const char *s1);

int main(void)
{
	char	*str1;
	char	*str2;
	char	dst1[100];
	char	dst2[100];
	int		res;

	printf("===== ft_strlen test =====\n");
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
	printf("===== ft_strcpy test =====\n");
	
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
	printf("===== ft_strcmp test =====\n");
	
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


	printf("\n");
	printf("===== ft_write test =====\n");

	str1 = "";
	write(1, "write    : ", 12);
	res = write(1, str1, strlen(str1) + 1);
	printf("\nres : %d\n", res);

	write(1, "ft_write : ", 12);
	res = ft_write(1, str1, strlen(str1) + 1);
	printf("\nres : %d\n", res);
	printf("\n");


	str1 = "hello world";
	write(1, "write    : ", 12);
	res = write(1, str1, strlen(str1) + 1);
	printf("\nres : %d\n", res);

	write(1, "ft_write : ", 12);
	res = ft_write(1, str1, strlen(str1) + 1);
	printf("\nres : %d\n", res);
	printf("\n");


	str1 = "hello world";
	write(1, "write    : ", 12);
	res = write(-1, str1, strlen(str1) + 1);
	printf("\nres : %d\n", res);

	write(1, "ft_write : ", 12);
	res = ft_write(-1, str1, strlen(str1) + 1);
	printf("\nres : %d\n", res);
	printf("\n");

	str1 = "hahahahahahah";
	write(1, "write    : ", 12);
	res = write(30, str1, strlen(str1) + 1);
	printf("\nres : %d\n", res);

	write(1, "ft_write : ", 12);
	res = ft_write(30, str1, strlen(str1) + 1);
	printf("\nres : %d\n", res);
	printf("\n");

	str1 = NULL;
	write(1, "write    : ", 12);
	res = write(1, str1, 10);
	printf("\nres : %d\n", res);

	write(1, "ft_write : ", 12);
	res = ft_write(1, str1, 10);
	printf("\nres : %d\n", res);
	printf("\n");



	printf("\n");
	printf("===== ft_read test =====\n");

	res = read(-1, NULL, 0);
	printf("read    res : %d\n", res);
	res = ft_read(-1, NULL, 0);
	printf("ft_read res : %d\n", res);
	printf("\n");


	memset(dst1, 0, 100);
	memset(dst2, 0, 100);
	write(1, "input(read) : ", 15);
	res = read(0, dst1, 10);
	printf("read    : %sres     : %d\n", dst1, res);
	write(1, "input(ft_read) : ", 18);
	res = ft_read(0,dst2, 10);
	printf("ft_read : %sres     : %d\n", dst2, res);
	printf("\n");

	memset(dst1, 0, 100);
	memset(dst2, 0, 100);
	write(1, "input(read) : ", 15);
	res = read(0, dst1, 10);
	printf("read    : %sres     : %d\n", dst1, res);
	write(1, "input(ft_read) : ", 18);
	res = ft_read(0,dst2, 10);
	printf("ft_read : %sres     : %d\n", dst2, res);
	printf("\n");


	printf("\n");
	printf("===== ft_read test =====\n");

	str1 = "";
	str2 = strdup(str1);
	printf("strdup    : %s\n", str2);
	free(str2);
	str2 = ft_strdup(str1);
	printf("ft_strdup : %s\n", str2);
	free(str2);

	str1 = "hello world";
	str2 = strdup(str1);
	printf("strdup    : %s\n", str2);
	free(str2);
	str2 = ft_strdup(str1);
	printf("ft_strdup : %s\n", str2);
	free(str2);

	str1 = "     aaaaa ";
	str2 = strdup(str1);
	printf("strdup    : %s\n", str2);
	free(str2);
	str2 = ft_strdup(str1);
	printf("ft_strdup : %s\n", str2);
	free(str2);

	
	str1 = "%^%^%^%^$#$%^#$%^$#$%";
	str2 = strdup(str1);
	printf("strdup    : %s\n", str2);
	free(str2);
	str2 = ft_strdup(str1);
	printf("ft_strdup : %s\n", str2);
	free(str2);


	return (0);
}
