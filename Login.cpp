#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

int Login(NewUser saved[N]) {

	static int i = 0;
	static int find = 0;
	char UserID[N] = "";
	char UserPW[N] = "";

	while (1) {

		printf("아이디 : ");
		scanf("%s", UserID);

		for (;; i++) {

			if (strcmp(saved[i].ID, UserID) != 0) {
				find = 0;

				if (strcmp(saved[find].ID, UserID) != 0) {
					printf("ID가 존재하지 않습니다.\n");
					printf("\n");
					break;
				}
			
			}
			else {
				find = i;

				while (1) {

					printf("비밀번호 : ");
					scanf("%s", UserPW);

					if (strcmp(saved[find].PW, UserPW) == 0)
					{
						printf("로그인 성공\n");
						return 0;
					}
					else
						printf("비밀번호 오류\n");
						printf("\n");
				}
				break;
			}

		}

	}
	
}