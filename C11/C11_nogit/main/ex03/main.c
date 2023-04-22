#include <stdio.h>
#include <string.h>

extern int ft_count_if(char** tab, int length, int (*f)(char*));

int	func(char* str) {
	return strcmp(str, "abc") == 0;
}

int main() {
	char* tab[3] = {"hello", "world", "bye"};
	printf("%d\n", ft_count_if(tab, 3, &func));

	char* tab2[3] = {"hello", "world", "abc"};
	printf("%d\n", ft_count_if(tab2, 3, &func));

	char* tab3[3] = {"hello", "abc", "abc"};
	printf("%d\n", ft_count_if(tab3, 3, &func));
	
	return 0;
}
