#include <stdio.h>

//union example
//{
//	int i;
//	char c;
//};
//
//int main()
//{
//	union example v;
//	v.c = 'a';
//	printf("v.c:%c v.i:%d\n", v.c, v.i);
//
//	v.i = 10000;
//	printf("v.c:%c v.i:%d\n", v.c, v.i);
//	return 0;
//}

//struct student {
//	int number;
//	char name[20];
//	double grade;
//};
//int main(void)
//{
//	struct student s = { 20190001, "홍길동", 4.3 };
//	struct student* p;
//	p = &s;
//
//	printf("학번 = %d \n이름 = %s \n 학점 = %f\n", s.number, s.name, s.grade);
//	printf("학번 = %d \n이름 = %s \n 학점 = %f\n", (*p).number, (*p).name, (*p).grade);
//	printf("학번 = %d \n이름 = %s \n 학점 = %f\n", p->number, p->name, p->grade);
//
//	return 0;
//}
 

//#include <string.h>
//#define STU_NUMBER 1
//#define REG_NUMBER 2

//struct student {
//	int type;
//	union {
//		int stu_number;
//		char reg_number[15];
//	} id;
//	char name[20];
//};
//
//void print(struct student s)
//{
//	switch (s.type)
//	{
//	case STU_NUMBER:
//		printf("학번 %d \n", s.id.stu_number);
//		printf("이름: %s\n", s.name);
//		break;
//	case REG_NUMBER:
//		printf("주민등록번호 : %s\n", s.id.reg_number);
//		printf("이름 : %s\n", s.name);
//		break;
//	default:
//		printf("타입오류 \n");
//		break;
//	}
//}
//int main(void)
//{
//	struct student s1, s2;
//	s1.type = STU_NUMBER;
//	s1.id.stu_number = 20190001;
//	strcpy(s1.name, "홍길동");
//	s2.type = REG_NUMBER;
//	strcpy(s2.id.reg_number, "860101-1056076");
//	strcpy(s2.name, "김철수");
//
//	print(s1);
//	print(s2);
//}



//int main(void)
//{
//	int i = 100;
//	int* p = &i;
//	int** q = &p;
//
//	*p = 200;
//	printf("i=%d\n", i);
//
//	**q = 300;
//	printf("i=%d\n", i);
//
//	return 0;
//
//}


