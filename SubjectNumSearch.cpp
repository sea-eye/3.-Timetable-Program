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

	printf("(�������� e�� �Է��ϼ���)\n");
	printf("�˻��� ���� ��ȣ(ex.2150189901) : ");
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

	printf("�߰��Է��Ϸ��� �ƹ�Ű�� �Է�, �������� e �Է� : ");
	scanf("%s", Exit);
	if (!strcmp(Exit, "e"))
		SearchList(info);
	else
		SubjectNumSearch(info);
}