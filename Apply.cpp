#include<stdio.h>
#include<string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning (disable:4996)
#pragma warning(disable: 4819)
int Apply(NewUser saved[N])
{
	static int count = 0;

	while (1)
	{

		printf("ID : ");
		scanf("%s", saved[count].ID);

		printf("PW : ");
		scanf("%s", saved[count].PW);
		if (strlen(saved[count].PW) < 9)
		{
			printf("비밀번호는 9자 이상이어야 합니다.\n다시 입력하십시오.\n\n");
		}
		else
		{
			printf("PW 확인: ");
			scanf("%s", saved[count].testPW);
			if (!strcmp(saved[count].PW, saved[count].testPW))
			{
				getchar();
				printf("======회원가입 성공 :)======\n\n");
				count++;

				return 0;
			}
			else
				printf("WRONG // 비밀번호 비밀번호 확인과 다릅니다.\n");
		}
	}
	printf("======회원가입 실패 :(======\n\n");
	return -1;
}