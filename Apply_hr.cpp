#include<stdio.h>
#include<string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning (disable:4996)
#pragma warning(disable: 4819)
int Apply(NewUser saved[N])
{

	int count = 0;

	printf("ID : ");
	scanf("%s", saved[count].ID);
	while (1)
	{
		printf("PassWord : ");
		scanf("%s", saved[count].PW);
		if (strlen(saved[count].PW) < 9)
		{
			printf("Your password must be over 9 letters!\n\n");
		}
		else
		{
			printf("PassWord Check: ");
			scanf("%s", saved[count].testPW);
			if (!strcmp(saved[count].PW, saved[count].testPW))
			{
				getchar();
				printf("==Success to Apply :)==\n");
				count++;
			
				getchar();
				return 0;
				//break;
			}
			else
				printf("WRONG // Check your password\n\n");
		}
	}
		printf("==Fail to Apply :(==\n");
		return -1;
	}
