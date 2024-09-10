#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Shuffle(int array[], int size)
{
	// for (int i = 0;i < size;i++)
	// {
	// 	printf("list의 [%d}의 값 : %d\n", i, array[i]);
	// }

	for (int i = 0;i < size; i++)
	{
		int seed = rand() % size;

		int temporary = array[seed];

		array[seed] = array[i];

		array[i] = temporary;
	}
}

int main()
{
#pragma region 셔플 함수
	// srand(time(NULL));
	// 
	// //  0   1   2   3   4   5   6   7   8     9
	// // [1] [2] [3] [4] [5] [6] [7] [8] [9] [10]
	// int list[10] = { 1,2,3,4,5,6,7,8,9,10 };
	// 
	// int size = sizeof(list) / sizeof(int);
	// 
	// Shuffle(list, size);
	// 
	// for (int i = 0;i < size;i++)
	// {
	// 	printf("list[%d]의 값 : %d\n", i, list[i]);
	// }
#pragma endregion

#pragma region 포인터 배열

	const char* dialog[3];

	dialog[0] = "안녕하세요?";
	dialog[1] = "누구신가요?";
	dialog[2] = "탐정입니다.";

	for (int i = 0;i < 3;i++)
	{
		printf("%s\n", dialog[i]);
	}
	
#pragma endregion


	

	return 0;
}