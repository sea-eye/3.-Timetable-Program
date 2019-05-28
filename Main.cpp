#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning(disable:4996)
extern int Apply(NewUser saved[N]);
extern int Login(NewUser saved[N]);
extern int Menu(TimeTable info[N]);

int main(void)
{
	//freopen("input.txt", "r", stdin);
	NewUser saved[N];
	TimeTable info[N];
	int loginCheck = -1;

	while (1)
	{
		
		int select = 0;

		printf("1.회원가입 하기\n");
		printf("2.로그인 하기\n");
		printf("3.종료하기\n");
		scanf("%d", &select);

		if (select == 1)
		{
			 Apply(saved);

		}
		else if (select == 2)
		{
			loginCheck = Login(saved);
			if (loginCheck == 0)
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

