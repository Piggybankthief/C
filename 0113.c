#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void swap(int *i,int *j)
//{
//	int tmp = 0; // �ӽ������ ���� tmp
//	// i�� �� 2 // j�� �� 4
//	tmp = *i; // �ӽ�����ҿ� i�� �ּҰ� ���� ex i�� �� : 2, i�� �ּҰ� 1777�� tmp�� ����
//	*i = *j; // i�� �ּҰ��� j�� �ּҰ� ���� i�� �ּҰ��� 1777�� j�� �ּҰ�1888�� ����
//			//i�� j�� ���� 4�� ����Ŵ
//	*j = tmp; // j�� �ּҰ��� 1777�� i�� ���� �ּҰ� 1888 �� ����Ŵ
//			//j�� i�� ���� 2�� ����Ŵ
//
//}
//void main()
//{
//	int i,j; // ���� ����
//
//	printf("ù�� ° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &i); //i�� �� �Է�
//	printf("�ι� ° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &j); // j�� �� �Է�
//	
//	printf("�ٲٱ� �� : %d, %d \n", i, j); // �״�� ���
//	swap(&i, &j); // �Լ��� ���� i�� �ּҴ� j�� ���� ����Ű�� j�� �ּҴ� i�� ���� ����Ŵ
//			// i�� j�� �ּҰ� ���
//	printf("�ٲ� �� : %d, %d", i, j); //�ּҰ��� ����Ű�� �� ���
//
//}

void main()
{
	char asw[10] = "banana";
	char str[10] = "_";
	char suc;
	int i, j, z,y, size;
	int temp = 0;
	int count = 5;
	size = strlen(asw);
	char tmp;

	for (y = 0; y < size; y++) {
		temp = str[0];
		str[y] = temp;
	}
	printf("��� ������ �����մϴ�. \n");
	printf("��� : %d��\n", count);
	printf("%s \n\n", str);

	while (1) {
		for (i = 0; i < size; i++)
		{
			printf("\n�ҹ��� ���ĺ��� �Է��ϼ��� : ");
			//scanf("%c", &suc);
			suc = getchar();
			tmp = getchar();
			printf("\n���� ���� ��Ȳ : ");
			int count1 = size-1;
			for (z = 0; z < size; z++)
			{
				if (suc == asw[z])
				{
					str[z] = suc;
				}
				
				printf("%c", str[z]);
			}
			for (j = 0; j < size; j++)
			{
				if (suc == asw[j])
				{
					break;
				}
				else if (suc != asw[j])
				{
					if (count1 > 0)
					{
						count1--;
					}
					else if (count1 == 0)
					{
						printf("\n��ġ�ϴ� ���ĺ��� �����ϴ�. \n");
						count--;
						printf("\n����� %d�� ���ҽ��ϴ�.\n", count);
						break;
					}
				}
			}
			if (count == 0)
			{
				printf("����� �����ϴ� ������ �� ������ �ּ���.");
				break;
			}
			if (strcmp(asw, str) == 0)
			{
				printf("\n������ : %s. \n�����ϼ̽��ϴ�. �����մϴ�!  \n",asw);
				break;
			}
		}
		if (count == 0)
		{
			break;
		}
		if (strcmp(asw, str) == 0)
		{
			break;
		}

	}
}
