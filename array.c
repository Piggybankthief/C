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

	int min = 100; // �ּҰ��� ù������
	int i, j, z;
	int temp = 0; // �ε����� ����
	int temp2 = 0; // ������ ����
	for (i = 0; i < SIZE; i++) // i�� SIZE���� ������ i++
	{
		min = 100;
		for (j = i; j < SIZE; j++) { // j�� i�϶� SIZE���� ������ j++ �ε������� ã�� ����
			if (a[j] < min) {  // a[1++]�� min���� �۴ٸ�
				min = a[j]; // a[j]���� min�� �ӽ÷� ���� j = 3 min= 2
				temp = j; // j�� �ε��� ���� temp�� �ӽ÷� ���� j = 3 temp = 3
			}
		}
		temp2 = a[temp]; // temp2�� �ּ��� �ε����� 3�� ���� 2�� �ӽ÷� ����
		a[temp] = a[i]; // temp���� 4�� �ӽ÷� ����
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
	int a[5] = { 4,8,9,11,3 }; // �迭 ����
	int SIZE = sizeof(a) / sizeof(int);
	selc(a, SIZE);

}
*/
int main()
{
	int a[5] = { 10,4,6,5,3 }; // �迭 ����
	int SIZE = sizeof(a) / sizeof(int);
	int i, j, z;
	int temp = 0; // �ε����� ����
	for (i = 1; i < SIZE; i++) // i�� SIZE���� ������ i++
	{
		temp = a[i];
		for (j = i - 1; j >= 0 && a[j] > temp; j--) { // j�� i�϶� SIZE���� ������ j++ �ε������� ã�� ����
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

