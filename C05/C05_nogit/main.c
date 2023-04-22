#include <stdio.h>

#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int main()
{
	printf("\n----ex00----\n");
	printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(0));
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_iterative_factorial(10));
	printf("\n----ex01----\n");
	printf("%d\n", ft_recursive_factorial(-1));
	printf("%d\n", ft_recursive_factorial(0));
	printf("%d\n", ft_recursive_factorial(3));
	printf("%d\n", ft_recursive_factorial(10));

	printf("\n----ex02----\n");
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(2, 1));
	printf("%d\n", ft_iterative_power(2, 2));
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(2, 10));
	printf("%d\n", ft_iterative_power(1, 1));
	printf("%d\n", ft_iterative_power(1, -1));
	
	printf("\n----ex03----\n");
    printf("%d\n", ft_recursive_power(0, 0));
    printf("%d\n", ft_recursive_power(2, 1));
    printf("%d\n", ft_recursive_power(2, 2));
    printf("%d\n", ft_recursive_power(2, 3));
    printf("%d\n", ft_recursive_power(2, 10));
    printf("%d\n", ft_recursive_power(1, 1));
    printf("%d\n", ft_recursive_power(1, -1));

	printf("\n----ex04----\n");
	printf("%d\n", ft_fibonacci(-1));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(6));
	printf("%d\n", ft_fibonacci(7));
	printf("%d\n", ft_fibonacci(8));
	printf("%d\n", ft_fibonacci(9));
	printf("%d\n", ft_fibonacci(10));

	printf("\n----ex05----\n");
	printf("-1: %d\n", ft_sqrt(-1));
	printf("0: %d\n", ft_sqrt(0));
	printf("1: %d\n", ft_sqrt(1));
	printf("2: %d\n", ft_sqrt(2));
	printf("3: %d\n", ft_sqrt(3));
	printf("4: %d\n", ft_sqrt(4));
	printf("5: %d\n", ft_sqrt(5));
	printf("9: %d\n", ft_sqrt(9));

	printf("\n----ex05----\n");
	printf("-1: %d\n", ft_is_prime(-1));
	printf("0: %d\n", ft_is_prime(0));
	printf("1: %d\n", ft_is_prime(1));
	printf("2: %d\n", ft_is_prime(2));
	printf("3: %d\n", ft_is_prime(3));
	printf("4: %d\n", ft_is_prime(4));
	printf("5: %d\n", ft_is_prime(5));
	printf("6: %d\n", ft_is_prime(6));
	printf("7: %d\n", ft_is_prime(7));
	printf("8: %d\n", ft_is_prime(8));
	printf("9: %d\n", ft_is_prime(9));
	printf("10: %d\n", ft_is_prime(10));
	printf("137: %d\n", ft_is_prime(137));
	
	printf("\n----ex06----\n");
	printf("-1: %d\n", ft_find_next_prime(-1));
	printf("0: %d\n", ft_find_next_prime(0));
	printf("1: %d\n", ft_find_next_prime(1));
	printf("2: %d\n", ft_find_next_prime(2));
	printf("3: %d\n", ft_find_next_prime(3));
	printf("4: %d\n", ft_find_next_prime(4));
	printf("5: %d\n", ft_find_next_prime(5));
	printf("6: %d\n", ft_find_next_prime(6));
	printf("7: %d\n", ft_find_next_prime(7));
	printf("14: %d\n", ft_find_next_prime(14));



}
