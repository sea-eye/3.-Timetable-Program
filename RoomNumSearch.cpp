//교실 번호 검색 기능
#include<stdio.h>
#include<string.h>
//#include "C:\Users\jonge\Desktop\ciai03.h"
#pragma once
#define N 20 //회원 가입 인원 수, 글자수, 시간표에서 과목 수 제한 등등
typedef struct NewUser {
   char ID[N];
   char PW[N];

} NewUser;
typedef struct TimeTable {
   char SubjectName[20];
   char SubjectNum[20];
   char Prof[10];
   char DayOfWeek[5];
   char RoomNum[6];
   char Time[20]; //입력 받을 때, 형식 명시 (ex. HH:MM - HH:MM)
} TimeTable;

//BuildingPrint(info, i);
//SimpleRoomPrint(info, i);

void RoomNumSearch(TimeTable info[N]);

int main(void) {
	TimeTable info[N] = {
		{"자료구조", "2150686201", "김익수", "수", "21302", "13:00-14:45"},
	{"자료구조", "2150685201", "김익수", "금", "21302", "13:00-14:45"},
	{"컴퓨터구조", "2150686301", "김병기", "월", "21302", "15:00-16:15"},
	{"컴퓨터구조", "2150686301", "김병기", "수", "21302", "15:00-16:15"} };
	RoomNumSearch(info);

}

void RoomNumSearch(TimeTable info[N]) {

	printf("교실번호 입력: ");
	char WhatRoom[6];
	scanf("%s", WhatRoom);

	if (strcmp(WhatRoom, "e") == 0) {
		return;
	}

	for (int i = 0; i < N; i++) {
		/*	if (strcmp(WhatRoom, "e") == 0) {
				break;
			}*/
		if (strcmp(WhatRoom, info[i].RoomNum) == 0) {
			for (int j = 0, p = 0; j < N, p < N; j++, p++) {
				printf("%d. %s / ", p + 1, info[j].SubjectName);
				for (int k = 0; k < N; k++) {
					if (strcmp(info[j].SubjectName, info[k].SubjectName) == 0)
						printf("%s: %s ", info[k].DayOfWeek, info[k].Time);
				}
				if (strcmp(info[j].SubjectName, info[j + 1].SubjectName) == 0)
					j++;
				printf("/ ");
				//BuildingPrint(info, i);
				printf(" ");
				//SimpleRoomPrint(info, i);
				printf("\n");
				
				if (strcmp(WhatRoom, info[j + 1].RoomNum) != 0)
					break;
			}
			

			printf("추가 입력을 하시려면 아무 키나 입력하세요. 나가려면 e를 입력하세요: ");
			scanf("%s", WhatRoom);
			if (strcmp(WhatRoom, "e") == 0) {
				break;
			}
			else {
				RoomNumSearch(info);
			}
		}

		else {
			printf("잘못 입력하셨습니다. 다시 입력하십시오.\n");
			RoomNumSearch(info);
			break;
		}
	}
}
