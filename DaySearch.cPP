#include <stdio.h>
#include <string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning(disable:4996)

extern void BuildingSave(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
extern void SearchList(TimeTable info[N]);

void DaySearch(TimeTable info[N]) {

	char WhatDay[4] = "";
	int i;
	char Exit[3] = "";
	int count;
	count = 0;

	printf("(나가려면 e를 입력하세요)\n");
	printf("검색할 요일 (ex.수) : ");
	scanf("%s", WhatDay);

	if (strcmp(WhatDay, "e") == 0) {
		SearchList(info);
	}

	if ((strcmp(WhatDay, "월") == 0) || (strcmp(WhatDay, "화") == 0) || (strcmp(WhatDay, "수") == 0) || (strcmp(WhatDay, "목") == 0) || (strcmp(WhatDay, "금") == 0) || (strcmp(WhatDay, "토") == 0) || (strcmp(WhatDay, "일") == 0))
	{

		for (i = 0; i < N; i++) {

			if (strcmp(WhatDay, info[i].firstDay) == 0) {

				printf("%d. %s / %s / %s / %s : %s / %s ", count + 1, info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
				SimpleRoomPrint(info, i);
				count++;
			}

		}

		for (i = 0; i < N; i++) {
			if (strcmp(WhatDay, info[i].secondDay) == 0) {

				printf("%d. %s / %s / %s / %s : %s / %s ", count + 1, info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
				SimpleRoomPrint(info, i);
				count++;
			}
		}
	}
	else
	{
		printf("잘못 입력하셨습니다. 다시 입력하십시오.\n");
		printf("--------------------------\n");
		DaySearch(info);
	}

		if (!strcmp(Exit, "e"))
			SearchList(info);
		else
			DaySearch(info);
	}
