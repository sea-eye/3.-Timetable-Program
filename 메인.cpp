#include<stdio.h>
#include<string.h>
#include "C:\Users\tlfzg\Desktop\�������_����\ciai03.h"
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
		printf("1.ȸ������ �ϱ�\n");
		printf("2.�α��� �ϱ�\n");
		printf("3.�����ϱ�\n");
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
int Login(NewUser saved[N], int count)
{
	char result[10];
	printf("�α��� ������� �Է��ϼ��� (����/����): ");
	scanf("%s", result);
	if (!strcmp(result, "����"))
	{
		printf("�α��� ����\n");
		return 0;
	}
	else if (!strcmp(result, "����"))
	{
		printf("�α��� ����\n");
		return -1;
	}
}
void Menu()
{
	printf("�޴�ȣ�� ����\n");
}