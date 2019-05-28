#include<stdio.h>
#include<string.h>
#pragma once
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

extern void BuildingPrint(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
extern void SearchList(TimeTable info[N]);

void SubjectNumSearch(TimeTable info[N]) {
	
	char LectureNum[20] = "";
	char Exit[20] = "";
	int i;

	printf("(나가려면 e를 입력하세요)\n");
	printf("검색할 과목 번호(ex.2150189901) : ");
	scanf("%s", LectureNum);

	if (strcmp(LectureNum, "e") == 0) {
		SearchList(info);
	}

	for (i = 0; i < N; i++) {

		if (strcmp(LectureNum, info[i].SubjectNum) == 0) {
		
			printf("%s / %s / %s / %s : %s / %s ", info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
			SimpleRoomPrint(info, i);
		}

	}

	printf("--------------------------\n");

	printf("추가입력하려면 아무키나 입력, 나가려면 e 입력 : ");
	scanf("%s", Exit);
	if (!strcmp(Exit, "e"))
		SearchList(info);
	else
		SubjectNumSearch(info);
}