#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern void ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *));

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

int custom_cmp(char *s1, char *s2)
{
	return strlen(s1) - strlen(s2);
}

void test(char **tab) {
	printf("---table start---\n");
	for (int i = 0; tab[i] != NULL; i++) {
		printf("%s\n", tab[i]);
	}
	printf("---sort---\n");
	ft_advanced_sort_string_tab(tab, &custom_cmp);
	for (int i = 0; tab[i] != NULL; i++) {
		printf("%s\n", tab[i]);
	}
	printf("---end---\n");
}

int main(int argc, char* argv[]) {
	char** arr = (char**)malloc(sizeof(char*) * argc);

	for (int i = 0; i < argc - 1; i++) {
		arr[i] = strdup(argv[i + 1]);
	}
	arr[argc - 1] = NULL;

	test(arr);

	for (int i = 0; i < argc - 1; i++) {
		free(arr[i]);
	}
	free(arr);

	return 0;
}
