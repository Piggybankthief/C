#include <stdio.h>
#include <stdlib.h>
#define _crt_secure_no_warnings
/*
void main()
{
	int a[5] = { 42,4,10,6,8 }; // 배열 정의
	int j, i, z;
	int temp = 0; // 기준값 임시 저장소
	int SIZE = sizeof(a) / sizeof(int); // 최대 배열 sizeof(a)는 int문 이므로 4바이트를 가짐
										// 4x5는 20을 가진 배열이므로 int값인 4바이트로 나눠 최대배열인 5를 구함
	for (i = 1; i < SIZE; i++) // 1값부터 비교
	{
		temp = a[i]; // 기준값 임시저장소에 저장
		for (j = i - 1; j >= 0 && temp < a[j]; j--) // i보다 앞에있는 숫자 와 비교하기 위해 -1 사용
			// j는 0까지 비교하고 기준값보다 크다면 실행
			// j--로 0이상의 앞에 있는 값과 비교
		{
			a[j + 1] = a[j]; // a[j + 1]에 a[j] 삽입
			// ex ) temp = 6이면 j의 값인 42와 비교
			// temp가 j보다 작으므로 실행 및
			// j+1의 값인 6에 j값인 42을 삽입
			// 반복실행
			// temp = 6의 값이 j-1인 10과 비교
			// temp보다 j보다 작으므로 실행 및
			// j--가 된 기준으로 j+1의 값인 42에 10을 삽입
			// temp = 6 j의 값인 4와 비교
			// temp가 j보다 크므로 반복문 종료
		}
		a[j + 1] = temp; //j는 4값이므로 j+1인 10값의 6 저장
			for (z = 0; z < SIZE; z++) // z를 5번 반복
			{
				printf("%d ", a[z]); // a[z]를 5번동안 숫자로 표현
			}
			printf("\n");
		}
	}
*/

int bubble_sort(int numptr[], int Value) {
	int i, j, z;
	int temp = 0;

	for (i = 0; i < Value; i++)
	{
		scanf("%d", &numptr[i]);
	}

	for (j = 0; j < Value; j++)
	{
		for (z = 0; z < Value - 1; z++)
		{

			if (numptr[z] > numptr[z + 1])
			{
				temp = numptr[z];
				numptr[z] = numptr[z + 1];
				numptr[z + 1] = temp;
			}
			output(numptr, Value);
		}
		printf("\n");
	}

	free(numptr);
	return numptr;
}
int output(int numptr[], int Value)
{
	int k;
	for (k = 0; k < Value; k++)
	{
		printf("%d ", numptr[k]);
	}
	printf("\n");
}

int main(void)
{
	int Value;
	int* numptr;
	printf("배열의 크기를 입력하세요 : ");
	scanf("%d", &Value);
	numptr = (int*)malloc(sizeof(int) * Value);
	// printf("%d", Value);
	printf("배열의 내용을 입력하세요 spacebar 이용 : ");
	bubble_sort(numptr, Value);

}




