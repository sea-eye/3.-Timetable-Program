#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

int Login(NewUser saved[N]) {

	int i ;
	int find = 0 ;
	char UserID[N] = "";
	char UserPW[N] = "";

	printf("======< �α��� >======\n");
		
		printf("ID : ");
		scanf("%s", UserID);


		for (i = 0; i < N; i++) {

			if (strcmp(saved[i].ID, UserID) != 0) {
				find = -1;
			}
			else {
				find = i;
				break;
			}
		}

			if (find == -1) {
				printf("ID�� �������� �ʽ��ϴ�.\n");
				printf("ID�� �ٽ� �Է��ϼ���.\n");
			}
			else {
					printf("PW : ");
					scanf("%s", UserPW);

					if (strcmp(saved[find].PW, UserPW) == 0)
					{
						printf("======�α��� ���� :)======\n\n");
						return 0;
					}
					else {
						printf("======�α��� ���� :(======\n");
						printf("WRONG // ��й�ȣ�� Ʋ�Ƚ��ϴ�.\n");
						printf("�ٽ� �α��� �Ͻʽÿ�.\n\n");
					}
			}

	}
	