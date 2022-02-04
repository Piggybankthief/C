#include <stdio.h>
#include <ctype.h>
#include <string.h>

//int main()
//{
//	
//	int i;
//	int k;
//	char str[100] = {0};
//	printf("영어 단어를 입력하세요. : ");
//
//	//while (1) {
//	//	
//	//	/*for (k = 0; k < strlen(str); k++) {
//	//		if (isdigit(str[k])) {
//	//			printf("중간에 숫자가 들어있습니다.");
//	//		}
//	//			break;
//	//	}*/
//	//}
//		scanf("%s", str);
//
//		for (i = 0; i < strlen(str); i++)
//		{
//			if (str[i] >= 'a' && str[i] <= 'z')
//			{
//				str[i] = str[i] - 'a' + 'A';
//			}
//			else if (str[i] >= 'A' && str[i] <= 'Z')
//			{
//				str[i] = str[i] - 'A' + 'a';
//			}
//
//		}
//	
//	printf("%s", str);
//	return 0;
//}

int main()
{
	int i,j;
	int count = 0;
	char str[100];
	char string[100];
	
	printf("문자를 입력하세요 : ");
	gets(str);
	printf("%s\n", str);
	printf("찾을 단어를 입력하시오 : ");
	gets(string);
	
	
	for (i = 0; i < strlen(str); i++)
	{
		for (j = 0; j < strlen(str); j++) {
			
			if (string[i] == str[j])
			{
				printf("%d", j);
			
			}
			
		}
		
	}


	/*printf("찾을 문자를 입력하세요 : ");
		scanf("%s", string);
		if (string == str) {
			for (j = 0; j < strlen(str); j++)
			{
				printf("%s ", str[j]);
			}
		}*/
	
}