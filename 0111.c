#include <stdio.h>
#include <stdlib.h>
#define _crt_secure_no_warnings
/*
void main()
{
	int a[5] = { 42,4,10,6,8 }; // �迭 ����
	int j, i, z;
	int temp = 0; // ���ذ� �ӽ� �����
	int SIZE = sizeof(a) / sizeof(int); // �ִ� �迭 sizeof(a)�� int�� �̹Ƿ� 4����Ʈ�� ����
										// 4x5�� 20�� ���� �迭�̹Ƿ� int���� 4����Ʈ�� ���� �ִ�迭�� 5�� ����
	for (i = 1; i < SIZE; i++) // 1������ ��
	{
		temp = a[i]; // ���ذ� �ӽ�����ҿ� ����
		for (j = i - 1; j >= 0 && temp < a[j]; j--) // i���� �տ��ִ� ���� �� ���ϱ� ���� -1 ���
			// j�� 0���� ���ϰ� ���ذ����� ũ�ٸ� ����
			// j--�� 0�̻��� �տ� �ִ� ���� ��
		{
			a[j + 1] = a[j]; // a[j + 1]�� a[j] ����
			// ex ) temp = 6�̸� j�� ���� 42�� ��
			// temp�� j���� �����Ƿ� ���� ��
			// j+1�� ���� 6�� j���� 42�� ����
			// �ݺ�����
			// temp = 6�� ���� j-1�� 10�� ��
			// temp���� j���� �����Ƿ� ���� ��
			// j--�� �� �������� j+1�� ���� 42�� 10�� ����
			// temp = 6 j�� ���� 4�� ��
			// temp�� j���� ũ�Ƿ� �ݺ��� ����
		}
		a[j + 1] = temp; //j�� 4���̹Ƿ� j+1�� 10���� 6 ����
			for (z = 0; z < SIZE; z++) // z�� 5�� �ݺ�
			{
				printf("%d ", a[z]); // a[z]�� 5������ ���ڷ� ǥ��
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
	printf("�迭�� ũ�⸦ �Է��ϼ��� : ");
	scanf("%d", &Value);
	numptr = (int*)malloc(sizeof(int) * Value);
	// printf("%d", Value);
	printf("�迭�� ������ �Է��ϼ��� spacebar �̿� : ");
	bubble_sort(numptr, Value);

}




