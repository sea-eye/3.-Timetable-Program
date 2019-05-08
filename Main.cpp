#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning(disable:4996)
extern int Apply(NewUser saved[N]);
extern int Login(NewUser saved[N]);
extern int Menu(TimeTable info[N]);
int ApplyCheck(NewUser saved[N], int *count);
int LoginCheck(NewUser saved[N], int count);

int main(void)
{
	//freopen("input.txt", "r", stdin);
	NewUser saved[N];
	TimeTable info[N];
	while (1)
	{
		int count = 0;
		int select = 0;
		int apply = -1;
		int login = -1;
		int success = -1;


		printf("1.회원가입 하기\n");
		printf("2.로그인 하기\n");
		printf("3.종료하기\n");
		scanf("%d", &select);

		if (select == 1)
		{
			
			apply = Apply(saved);
			
			while (success == -1)
				success = ApplyCheck(saved, &count);

		}
		else if (select == 2)
		{
			Login(saved);

			while (success == -1)
				success = LoginCheck(saved, count);
			if (success == 0)
				Menu(info);
		}
		else if (select == 3) {
			printf("프로그램을 종료합니다.\n");
			exit(-1);
		}
	}
	getchar();
	return 0;
}
int ApplyCheck(NewUser saved[N], int *count)
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
int LoginCheck(NewUser saved[N], int count)
{
	char result[10];
	printf("로그인 결과값을 입력하세요 (성공/실패): ");
	scanf("%s", result);
	if (!strcmp(result, "성공"))
	{
		printf("===========================\n");
		return 0;
	}
	else if (!strcmp(result, "실패"))
	{
		printf("===========================\n");
		return -1;
	}
}
