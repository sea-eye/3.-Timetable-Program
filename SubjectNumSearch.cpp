#include<stdio.h>
#include<string.h>
#pragma once
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

extern void BuildingPrint(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
extern int SearchList(TimeTable info[N]);

void SubjectNumSearch(TimeTable info[N]) {
	
	char LectureNum[20] = "";

	int i;

	int count;

	while (1) {

		count = 0;

		printf("(나가려면 e를 입력하세요)\n");
		printf("검색할 과목 번호 : "); //21201
		scanf("%s", LectureNum);
		getchar();

		for (i = 0; i < N; i++) {

			if (strcmp(LectureNum, "e") == 0) {
				SearchList(info);
			}
			else if (strcmp(LectureNum, info[i].SubjectNum) == 0) {

				printf("%d. %s / %s / %s / %s : %s / %s ", count + 1, info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
				SimpleRoomPrint(info, i);
				count++;
			
			}
			else
				break;

		}
	}
}