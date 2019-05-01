#include<stdio.h>
#include<string.h>
#pragma once
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"


extern void BuildingPrint(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
//함수 이것 두개만 불러도 되나?

void SubjectNumSearch(TimeTable info[N]) {
	
	int i;
	char LectureNum[20];

	for (i = 0; i < N; i++) {

		printf("과목번호를 입력하세요 :  (종료하려면 e, 다른 과목을 입력하시려면 m을 입력하세요)\n");
		scanf("%s", LectureNum);

		if (strcmp(LectureNum, "e") == 0) {
			break;
		}
		else if (strcmp(LectureNum, info[i].SubjectNum) == 0) {


			printf("%s / %s / %s / %s : %s / %s ", info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
			SimpleRoomPrint(info, i);

			getchar();
			i = 0;
			break;

			//이후에 번호선택으로 바로가는게 아니라 검색할 과목을 추가로 입력하시겠습니까? 이런게 나오면 좋을듯

		}
		else if (strcmp(LectureNum, "m") == 0) {
			continue;
		}
		else {
			printf("적절한 과목번호, e, 또는 m을 입력하세요\n");
			continue;
		}
	}
}