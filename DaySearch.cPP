#include <stdio.h>
#include <string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning(disable:4996)
//[DaySearch()] - 요일별 검색

//BuildingPrint(info, i); 로 쓴 후 주석 처리
//SimpleRoomPrint(info, i); 로 쓴 후 주석 처리
TimeTable info[N] = {

	{ "자료구조", "2150686201", "김익수", "수", "0", "13:30 - 15:00" },
{ "컴퓨터구조", "2150686301", "장훈", "수", "0", "13:30 - 15:00" } };

void DaySearch(TimeTable info[N]) {
	char WhatDay[5];
	char ExitDay[2];
	
	int i;

	while (1) {

		printf("요일 입력(ex.수) : ");
		scanf("%s", WhatDay);
		if (!strcmp(WhatDay, "월") == 0 && !strcmp(WhatDay, "화") == 0 && !strcmp(WhatDay, "수") == 0 && !strcmp(WhatDay, "목") == 0 && !strcmp(WhatDay, "금") == 0 && !strcmp(WhatDay, "토") == 0 && !strcmp(WhatDay, "일") == 0)
		{
			printf("잘못 입력하셨습니다. 다시 입력하십시오.\n\n");
			continue;
		}

		for (i = 0; i < N; i++) {

			if (strcmp(WhatDay, "e") == 0) break;
			else if (strcmp(WhatDay, info[i].DayOfWeek) == 0) {
				printf("%d. %s %s %s %s %s\n", i + 1, info[i].SubjectName, info[i].SubjectNum, info[i].Prof, WhatDay, info[i].Time);

			}

		}

		printf("추가입력하려면 아무키나 입력, 나가려면 e 입력 :");
		scanf("%s", ExitDay);
		if (strcmp(ExitDay, "e") == 0) break;
		printf("<추가로 입력합니다>\n\n");
	}

}
int main(void) {
	DaySearch(info);
	return 0;
}