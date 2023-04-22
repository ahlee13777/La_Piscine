#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern void ft_sort_string_tab(char **tab);

void test(char **tab) {
	printf("---table start---\n");
	for (int i = 0; tab[i] != NULL; i++) {
		printf("%s\n", tab[i]);
	}
	printf("---sort---\n");
	ft_sort_string_tab(tab);
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
