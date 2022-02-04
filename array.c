#include <stdio.h>
/*
int bubble(int a[], int SIZE)
{
	int i, j;
	int temp = 0;
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
			display(a, SIZE);
		}
		printf("\n");

	}
}
int display(int a[], int SIZE)
{
	int z;
	for (z = 0; z < SIZE; z++)
	{
		printf("%d ", a[z]);

	}
	printf("\n");
}
*/
/*
int selc(int a[], int SIZE)

{

	int min = 100; // 최소값을 첫번쨰로
	int i, j, z;
	int temp = 0; // 인덱스값 저장
	int temp2 = 0; // 순서값 저장
	for (i = 0; i < SIZE; i++) // i가 SIZE보다 작으면 i++
	{
		min = 100;
		for (j = i; j < SIZE; j++) { // j가 i일때 SIZE보다 작으면 j++ 인덱스값을 찾기 위함
			if (a[j] < min) {  // a[1++]이 min보다 작다면
				min = a[j]; // a[j]값을 min의 임시로 저장 j = 3 min= 2
				temp = j; // j의 인덱스 값을 temp의 임시로 저장 j = 3 temp = 3
			}
		}
		temp2 = a[temp]; // temp2에 최소의 인덱스값 3의 값인 2를 임시로 저장
		a[temp] = a[i]; // temp값의 4를 임시로 저장
		a[i] = min;
		display(a, SIZE);
	}
}


int display(int a[], int SIZE)
{
	int z;
	for (z = 0; z < SIZE; z++)
	{
		printf("%d ", a[z]);

	}
	printf("\n");
}

int main()
{
	int a[5] = { 4,8,9,11,3 }; // 배열 정의
	int SIZE = sizeof(a) / sizeof(int);
	selc(a, SIZE);

}
*/
int main()
{
	int a[5] = { 10,4,6,5,3 }; // 배열 정의
	int SIZE = sizeof(a) / sizeof(int);
	int i, j, z;
	int temp = 0; // 인덱스값 저장
	for (i = 1; i < SIZE; i++) // i가 SIZE보다 작으면 i++
	{
		temp = a[i];
		for (j = i - 1; j >= 0 && a[j] > temp; j--) { // j가 i일때 SIZE보다 작으면 j++ 인덱스값을 찾기 위함
			a[j + 1] = a[j];
		}
			a[j + 1] = temp;
		
			for (z = 0; z < SIZE; z++)
			{
				printf("%d ", a[z]);

			}
			printf("\n");
		}
	}

