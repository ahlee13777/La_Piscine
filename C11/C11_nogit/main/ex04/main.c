#include <stdio.h>

extern int ft_is_sort(int* tab, int length, int (*f)(int, int));

int test_compare(int a, int b) {
	return a - b;
}

void test_is_sort(int* tab, int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", tab[i]);
	}
	printf("=> %d\n", ft_is_sort(tab, length, &test_compare));
}

int main() {
	int arr1[] = {2, 2, 3, 4, 6, 6};
	test_is_sort(arr1, 6);

	int arr2[] = {6, 6, 4, 3, 2, 1};
	test_is_sort(arr2, 6);

	int arr3[] = {2, 3, 1, 4, 5, 6};
	test_is_sort(arr3, 6);

	int arr4[] = {6, 4, 2, 1, 3, 5};
	test_is_sort(arr4, 6);

	int arr5[] = {1, 2, 2, 3, 4, 5};
	test_is_sort(arr5, 6);
	
	int arr6[] = {1, 1, 1, 1, 1, 1};
	test_is_sort(arr6, 6);

	int arr7[] = {1, 1, 1, 1, 1, 2};
	test_is_sort(arr7, 6);

	int arr8[] = {1, 1, 1, 1, 2, 1};
	test_is_sort(arr8, 6);

	return 0;
}
