#include<stdio.h>
#include<string.h>
#include "C:\Users\tlfzg\Desktop\�������_����\ciai03.h"
#pragma warning (disable:4996)
int main(void)
{
	NewUser saved[N];
	int count = 0;
	char testPW[N];
	printf("���̵�: ");
	scanf("%s", saved[count].ID);
	while (1)
	{
		printf("��й�ȣ: ");
		scanf("%s", saved[count].PW);
		if (strlen(saved[count].PW) < 9)
		{
			printf("��й�ȣ�� 9�ڸ� �̻� �Է����ּ���\n\n");
		}
		else
		{
			printf("��й�ȣ Ȯ��: ");
			scanf("%s", testPW);
			if (!strcmp(saved[count].PW, testPW))
			{
				getchar();
				printf("-ȸ������ ����-\n");
				count++;
				printf("count ����Ȯ��=%d", count);
				getchar();
				return 0;
				//break;
			}
			else
				printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�\n\n");
		}
	}
		printf("ȸ������ ����\n");
		return -1;
	}