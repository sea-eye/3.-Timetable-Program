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
			printf("��й�ȣ�� 9�� �̻��̾�� �մϴ�.\n�ٽ� �Է��Ͻʽÿ�.\n\n");
		}
		else
		{
			printf("PW Ȯ��: ");
			scanf("%s", saved[count].testPW);
			if (!strcmp(saved[count].PW, saved[count].testPW))
			{
				getchar();
				printf("======ȸ������ ���� :)======\n\n");
				count++;

				return 0;
			}
			else
				printf("WRONG // ��й�ȣ ��й�ȣ Ȯ�ΰ� �ٸ��ϴ�.\n");
		}
	}
	printf("======ȸ������ ���� :(======\n\n");
	return -1;
}