#include <stdio.h>
#include <string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning(disable:4996)

extern void BuildingSave(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
extern int SearchList(TimeTable info[N]);

void DaySearch(TimeTable info[N]) {
	char WhatDay[5] = ""; 
	char ExitDay[2] = "";
	
	int i, j;

	for(j=0 ; j<N; j++ ){

		printf("요일 입력(ex.수) : ");
		scanf("%s", WhatDay);
		getchar();

		if (!strcmp(WhatDay, "월") == 0 && !strcmp(WhatDay, "화") == 0 && !strcmp(WhatDay, "수") == 0 && !strcmp(WhatDay, "목") == 0 && !strcmp(WhatDay, "금") == 0 && !strcmp(WhatDay, "토") == 0 && !strcmp(WhatDay, "일") == 0)
		{
			printf("잘못 입력했습니다. 다시 입력하십시오.\n\n");
			continue;
		}

		for (i = 0; i < N; i++) {

			
			if (strcmp(WhatDay, "e") == 0) break;
			else if (strcmp(WhatDay, info[i].DayOfWeek) == 0) {
				printf("%d. %s / %s / %s / %s : %s / %s ", i + 1, info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
				SimpleRoomPrint(info, i);
			}

		}

		printf("추가입력하려면 아무키나 입력, 나가려면 e 입력 : ");
		scanf("%s", ExitDay);
		if (strcmp(ExitDay, "e") == 0) SearchList(info);
		printf("<추가로 입력합니다>\n\n");
	}

}