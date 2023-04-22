#include <stdio.h>

#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"
#include "ex04/ft_convert_base.c"
#include "ex04/ft_convert_base2.c"

int main()
{
	printf("\n----ex00----\n");
 	printf("%s\n", ft_strdup("abcd"));
 	printf("%s\n", ft_strdup(""));
 	printf("%s\n", ft_strdup("abdj1.zck dj"));

	printf("\n----ex01----\n");
	int *arr;
	int	i;
	int min;
	int max;

	i = 0;
	min = 5;
	max = 42;
	arr = ft_range(min, max);
	if (arr == NULL)
		printf("%p", arr);
	else
	{
		printf("%d ~ %d:\n", min, max);
		while (arr[i])
			printf("%d ", arr[i++]);
		printf("\n\n");
	}

	printf("\n----ex02----\n");
	int *arr_2 = NULL;
	min = 7;
	max = 10;
	printf("%d ~ %d, 리턴 값: %d\n", min, max, ft_ultimate_range(&arr_2, min, max));
	if (arr_2 == NULL)
		printf("null입니다.\n");
	i = 0;
	while (arr_2[i])
	{
		printf("%d ", arr_2[i]);
		i++;
	}

	printf("\n----ex03----\n");
	char *c[5] = {"000", "111", "222", "333", "444"};
 	printf("%s\n", ft_strjoin(5, c, "---"));
	

	printf("\n----ex04----\n");

    printf("%s\n", ft_convert_base("010111", "01", "0123456789abcdef"));

    printf("\n베이스체크\n");
    printf("1:%s\n", ft_convert_base("010111", " 01", "0123456789abcdef"));
    printf("2:%s\n", ft_convert_base("010111", "0-1", "0123456789abcdef"));
    printf("3:%s\n", ft_convert_base("010111", "010", "0123456789abcdef"));
    printf("\n아토이 체크\n");
    printf("1:%s\n", ft_convert_base("    --+012101 1", "012", "0123456789abcdef"));
    printf("2:%s\n", ft_convert_base("  \n +--0101132a", "0123", "0123456789"));
}
