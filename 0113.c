#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//void swap(int *i,int *j)
//{
//	int tmp = 0; // 임시저장소 변수 tmp
//	// i의 값 2 // j의 값 4
//	tmp = *i; // 임시저장소에 i의 주소값 저장 ex i의 값 : 2, i의 주소값 1777을 tmp에 저장
//	*i = *j; // i의 주소값에 j의 주소값 저장 i의 주소값인 1777에 j의 주소값1888을 저장
//			//i는 j의 값인 4를 가리킴
//	*j = tmp; // j의 주소값인 1777에 i의 원래 주소값 1888 을 가리킴
//			//j는 i의 값인 2를 가리킴
//
//}
//void main()
//{
//	int i,j; // 변수 선언
//
//	printf("첫번 째 숫자를 입력하세요 : ");
//	scanf("%d", &i); //i의 값 입력
//	printf("두번 째 숫자를 입력하세요 : ");
//	scanf("%d", &j); // j의 값 입력
//	
//	printf("바꾸기 전 : %d, %d \n", i, j); // 그대로 출력
//	swap(&i, &j); // 함수로 통해 i의 주소는 j의 값을 가리키고 j의 주소는 i의 값을 가리킴
//			// i와 j의 주소값 출력
//	printf("바꾼 후 : %d, %d", i, j); //주소값이 가리키는 값 출력
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
	printf("행맨 게임을 시작합니다. \n");
	printf("목숨 : %d개\n", count);
	printf("%s \n\n", str);

	while (1) {
		for (i = 0; i < size; i++)
		{
			printf("\n소문자 알파벳을 입력하세요 : ");
			//scanf("%c", &suc);
			suc = getchar();
			tmp = getchar();
			printf("\n현재 진행 상황 : ");
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
						printf("\n일치하는 알파벳이 없습니다. \n");
						count--;
						printf("\n목숨이 %d개 남았습니다.\n", count);
						break;
					}
				}
			}
			if (count == 0)
			{
				printf("목숨이 없습니다 다음에 또 도전해 주세요.");
				break;
			}
			if (strcmp(asw, str) == 0)
			{
				printf("\n정답은 : %s. \n성공하셨습니다. 축하합니다!  \n",asw);
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
