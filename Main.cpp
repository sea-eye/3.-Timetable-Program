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
	NewUser saved[N];
	TimeTable info[N];
	while (1)
	{
		int count = 0;
		int select = 0;
		int apply = -1;
		int login = -1;
		int success = -1;


		printf("1.ȸ������ �ϱ�\n");
		printf("2.�α��� �ϱ�\n");
		printf("3.�����ϱ�\n");
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
			printf("���α׷��� �����մϴ�.\n");
			exit(-1);
		}
	}
	getchar();
	return 0;
}
int ApplyCheck(NewUser saved[N], int *count)
{
	char result[10];
	printf("ȸ������ ������� �Է��ϼ��� (����/����): ");
	scanf("%s", result);
	if (!strcmp(result, "����"))
	{
		printf("ȸ������ ����\n");
		*count++;
		return 0;
	}
	else if (!strcmp(result, "����"))
	{
		printf("ȸ������ ����\n");
		return -1;
	}
}
int LoginCheck(NewUser saved[N], int count)
{
	char result[10];
	printf("�α��� ������� �Է��ϼ��� (����/����): ");
	scanf("%s", result);
	if (!strcmp(result, "����"))
	{
		printf("===========================\n");
		return 0;
	}
	else if (!strcmp(result, "����"))
	{
		printf("===========================\n");
		return -1;
	}
}
