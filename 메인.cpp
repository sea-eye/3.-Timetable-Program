#include<stdio.h>
#include<string.h>
#include "C:\Users\tlfzg\Desktop\헤더파일_모음\ciai03.h"
#pragma warning(disable:4996)
int Apply(NewUser saved[N], int *count);
int Login(NewUser saved[N], int count);
void Menu();
int main(void)
{
	NewUser saved[N];
	TimeTable info[N];
	while (1)
	{
		int count = 0;
		int select = 0;
		printf("1.회원가입 하기\n");
		printf("2.로그인 하기\n");
		printf("3.종료하기\n");
		scanf("%d", &select);
		if (select == 1)
		{
			int success = -1;
			while (success == -1)
				success = Apply(saved, &count);

		}
		else if (select == 2)
		{
			int success = -1;
			while (success == -1)
				success = Login(saved, count);
			if (success == 0)
				Menu();
		}
		else if (select == 3)break;
	}
	getchar();
	return 0;
}
int Apply(NewUser saved[N], int *count)
{
	char result[10];
	printf("회원가입 결과값을 입력하세요 (성공/실패): ");
	scanf("%s", result);
	if (!strcmp(result, "성공"))
	{
		printf("회원가입 성공\n");
		*count++;
		return 0;
	}
	else if (!strcmp(result, "실패"))
	{
		printf("회원가입 실패\n");
		return -1;
	}
}
int Login(NewUser saved[N], int count)
{
	char result[10];
	printf("로그인 결과값을 입력하세요 (성공/실패): ");
	scanf("%s", result);
	if (!strcmp(result, "성공"))
	{
		printf("로그인 성공\n");
		return 0;
	}
	else if (!strcmp(result, "실패"))
	{
		printf("로그인 실패\n");
		return -1;
	}
}
void Menu()
{
	printf("메뉴호출 성공\n");
}