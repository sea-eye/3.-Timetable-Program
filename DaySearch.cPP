#include <stdio.h>
#include <string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning(disable:4996)

extern void BuildingSave(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
extern void SearchList(TimeTable info[N]);

//요일이 하나밖에 없을 때 하나만 있는 과목만 출력되는 현상

void DaySearch(TimeTable info[N]) {
	char WhatDay[5] = "";
	char Exit[5] = "";
	int i;
	int count;

	count = 0;

	printf("(나가려면 e를 입력하세요)\n");
	printf("검색할 요일(ex.수) : "); //그 외 단어 칠 시 exception 걸어야 할 듯
	scanf("%s", WhatDay);

	if (strcmp(WhatDay, "e") == 0) {
		printf("e %d\n", count);
		SearchList(info);
	}

	for (i = 0; i < N; i++) {

		if (strcmp(WhatDay, info[i].DayOfWeek) == 0) {

			printf("%d. %s / %s / %s / %s : %s / %s ", count + 1, info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
			SimpleRoomPrint(info, i);
			count++;
		}

	}

	printf("--------------------------\n");

	printf("추가입력하려면 아무키나 입력, 나가려면 e 입력 : ");
	scanf("%s", Exit);
	if (!strcmp(Exit, "e"))
		SearchList(info);
	else
		DaySearch(info);

}