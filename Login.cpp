#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

int Login(NewUser saved[N]) {

	static int i = 0;
	static int find = 0;
	char UserID[N] = "";
	char UserPW[N] = "";

	printf("======< �α��� >======\n");

	while (1) {
		
		printf("ID : ");
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

					printf("PW : ");
					scanf("%s", UserPW);

					if (strcmp(saved[find].PW, UserPW) == 0)
					{
						printf("======�α��� ���� :)======\n");
						return 0;
					}
					else
						printf("======�α��� ���� :(======\n");
						printf("WRONG // ��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
						printf("\n");
				}
				break;
			}

		}

	}
	
}