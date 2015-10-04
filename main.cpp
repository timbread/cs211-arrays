#include "arrays.h"
#include <iostream>
#include <cassert>

int main() {

	task_1();
	task_2();
	assert(task_3_zero() == 0);
	task_4();

	int arr1[5]{ 1, 2, 3, 4, 5 };
	int arr2[5]{ 0 };
	task_5_copy(arr1, arr2, 5);

	task_7_print(arr2, 5);

	std::cout << std::endl;

	int arr3[5]{ -1, -2, -3, -4, -5 };
	int arr4[5]{ 0 };
	task_6_poor_copy(arr3, arr4, 5);

	task_7_print(arr4, 5);
}