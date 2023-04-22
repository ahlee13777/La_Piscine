#include <stdio.h>

extern void	ft_foreach(int* tab, int length, void(*f)(int));

void test_print(int a) {
	printf("%d\n", a);
}

int main() {
	int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	ft_foreach(arr, 10, &test_print);

	return 0;
}
