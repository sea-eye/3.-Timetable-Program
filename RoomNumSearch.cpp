//교실 번호 검색 기능
#include<stdio.h>
#include<string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning (disable:4996)

extern void BuildingSave(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
extern int SearchList(TimeTable info[N]);

void RoomNumSearch(TimeTable info[N]) {

	char WhatRoom[6] = "";

	int i;

	int count;

	while (1) {

		count = 0;

		printf("(나가려면 e를 입력하세요)\n");
		printf("검색할 강의실 번호 5자리 : ");
		scanf("%s", WhatRoom);
		getchar();

		for (i = 0; i < N; i++) {

			if (strcmp(WhatRoom, "e") == 0) {
				SearchList(info);
			}
			else if (strcmp(WhatRoom, info[i].RoomNum) == 0) {

				printf("%d. %s / %s / %s / %s : %s / %s ", count + 1, info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
				SimpleRoomPrint(info, i);
				count++;
			
			}
			else
				break;

		}
	}
}
