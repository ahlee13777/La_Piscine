#include <stdio.h>
#include <string.h>

extern int ft_any(char** tab, int (*f)(char*));

int	func(char* str) {
	int i = 0;
	while (str[i])
		i++;
	if (i > 4)
		return (0);
	return (1);
}

int main() {
	char* tab[4] = {"hello", "world", "bye", 0};
	printf("%d\n", ft_any(tab, &func));

	char* tab2[4] = {"h", "wo", "a", 0};
	printf("%d\n", ft_any(tab2, &func));

	char* tab3[4] = {"abcddddd", "abcdddddddd", "abddddc", 0};
	printf("%d\n", ft_any(tab3, &func));
	
	return 0;
}
