#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

int Login(NewUser saved[N]) {

	int i ;
	int find = 0 ;
	char UserID[N] = "";
	char UserPW[N] = "";

	printf("======< 로그인 >======\n");
		
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
				printf("ID가 존재하지 않습니다.\n");
				printf("ID를 다시 입력하세요.\n");
			}
			else {
					printf("PW : ");
					scanf("%s", UserPW);

					if (strcmp(saved[find].PW, UserPW) == 0)
					{
						printf("======로그인 성공 :)======\n\n");
						return 0;
					}
					else {
						printf("======로그인 실패 :(======\n");
						printf("WRONG // 비밀번호가 틀렸습니다.\n");
						printf("다시 로그인 하십시오.\n\n");
					}
			}

	}
	