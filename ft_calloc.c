/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdakni <mdakni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:13:18 by mdakni            #+#    #+#             */
/*   Updated: 2024/11/05 12:59:48 by mdakni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;

	if(count == 0 || size == 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	if (size > SIZE_MAX / count)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * count);
	return (ptr);
}

/* int main() {
	// Test case: Check for overflow
	size_t count = 15641561561456748; // Maximum size_t value
	size_t size = 528;         // Small size

	void *ptr = ft_calloc(count, size);
		void *ptr1 = calloc(count, size);
	if (ptr == NULL) {
		printf("Allocation failed as expected due to overflow (count: %zu, size:
			%zu)\n", count, size);
	} else {
		printf("Unexpectedly succeeded in allocation\n");
		free(ptr);
	}
 if (ptr1 == NULL) {
		printf("Allocation failed as expected due to overflow (count: %zu, size:
			%zu)\n", count, size);
	} else {
		printf("Unexpectedly succeeded in allocation\n");
		free(ptr1);
	}
	return (0);
} */

/* int main() {
	// Test case 1: Normal allocation
	size_t count = 5;
	size_t size = sizeof(int);
	int *array = (int *)calloc(count, size);
	if (array != NULL) {
		printf("Test 1: Successfully allocated memory for %zu integers\n",
			count);
		for (size_t i = 0; i < count; i++) {
			printf("array[%zu] = %d\n", i, array[i]); // Should be 0
		}
		free(array);
	} else {
		printf("Test 1: Allocation failed\n");
	}

	// Test case 2: Zero count
	array = (int *)calloc(0, size);
	if (array == NULL) {
		printf("Test 2: Allocation failed as expected for zero count\n");
	} else {
		printf("Test 2: Allocation succeeded unexpectedly for zero count\n");
		free(array);
	}

	// Test case 3: Zero size
	array = (int *)calloc(count, 0);
	if (array == NULL) {
		printf("Test 3: Allocation failed as expected for zero size\n");
	} else {
		printf("Test 3: Allocation succeeded unexpectedly for zero size\n");
		free(array);
	}

	// Test case 4: Zero count and size
	array = (int *)calloc(0, 0);
	if (array == NULL) {
		printf("Test 4: Allocation failed as expected for zero count and size\n");
	} else {
		printf("Test 4: Allocation succeeded unexpectedly for zero count and size\n");
		free(array);
	}

	// Test case 5: Maximum size_t value
	size_t large_count = SIZE_MAX;
	size_t large_size = 1;
	void *ptr = calloc(large_count, large_size);
	if (ptr == NULL) {
		printf("Test 5: Allocation failed as expected due to overflow (count:
			%zu, size: %zu)\n", large_count, large_size);
	} else {
		printf("Test 5: Unexpectedly succeeded in allocation\n");
		free(ptr);
	}

	// Test case 6: Large count with small size (should fail)
	large_count = 3000000000; // Large count
	large_size = sizeof(int); // Size of int
	ptr = calloc(large_count, large_size);
	if (ptr == NULL) {
		printf("Test 6: Allocation failed as expected due to overflow (count:
			%zu, size: %zu)\n", large_count, large_size);
	} else {
		printf("Test 6: Unexpectedly succeeded in allocation\n");
		free(ptr);
	}

	// Test case 7: Small count and size
	large_count = 10; // Reasonable count
	large_size = sizeof(char); // Reasonable size
	ptr = calloc(large_count, large_size);
	if (ptr != NULL) {
		printf("Test 7: Successfully allocated memory for %zu chars\n",
			large_count);
		free(ptr);
	} else {
		printf("Test 7: Allocation failed unexpectedly\n");
	}

	// Test case 8: Large size with small count (should succeed)
	large_count = 100;
	large_size = sizeof(double); // Reasonable size
	ptr = calloc(large_count, large_size);
	if (ptr != NULL) {
		printf("Test 8: Successfully allocated memory for %zu doubles\n",
			large_count);
		free(ptr);
	} else {
		printf("Test 8: Allocation failed unexpectedly\n");
	}

	// Test case 9: Allocation with count and size both set to 1
	large_count = 1;
	large_size = 1;
	ptr = calloc(large_count, large_size);
	if (ptr != NULL) {
		printf("Test 9: Successfully allocated memory for %zu byte\n",
			large_count);
		free(ptr);
	} else {
		printf("Test 9: Allocation failed unexpectedly\n");
	}

	return (0);
}
 */
