#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

int Login(NewUser saved[N]) {

	int i = 0;
	int find = 0;
	char UserID[N] = "";
	char UserPW[N] = "";

	while (1) {

		printf("���̵� : ");
		scanf("%s", UserID);

		for (;; i++) {

			if (strcmp(saved[i].ID, UserID) != 0) {
				find = 0;

				if (strcmp(saved[find].ID, UserID) != 0) {
					printf("ID�� �������� �ʽ��ϴ�.\n");
					printf("\n");
					break;
				}
			
			}
			else {
				find = i;

				while (1) {

					printf("��й�ȣ : ");
					scanf("%s", UserPW);

					if (strcmp(saved[find].PW, UserPW) == 0)
					{
						printf("�α��� ����\n");
						return 0;
					}
					else
						printf("��й�ȣ ����\n");
						printf("\n");
				}
				break;
			}

		}

	}
	
}
/*
int main() {

	NewUser saved[N];
	strcpy(saved[0].ID, "chocotofu");
	strcpy(saved[0].PW, "dlwlrma516");
	
	int login = -1;

	login = Login(saved);

	return 0;
}

*/