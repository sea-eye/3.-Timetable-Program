#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

extern void BuildingPrint(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);

void SubjectNameSearch(TimeTable *info) {

	char Lecture[20] = "";
	//char addSub[10] = "";
	//동일 이름의 과목이 여러 개 안뜨고 마지막 값만 들어옴
	//그마저도 한번더 수행하려하면 초기화됨...

	int i;

	for (i = 0; i < N; i++) {

		printf("과목명을 입력하세요 :  (종료하려면 e, 다른 과목을 입력하시려면 m을 입력하세요)\n");
		scanf("%s", Lecture);

		if (strcmp(Lecture, "e") == 0) {
			break;
		}
		else if (strcmp(Lecture, info[i].SubjectName) == 0) {

			

				printf("%s / %s / %s / %s : %s / %s ", info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
				SimpleRoomPrint(info, i);

				getchar();

			
			/*printf("과목 검색을 추가로 하시겠습니까?(Y/N)");
			scanf("%s", addSub);

			if (strcmp(addSub, "Y") == 0)
				continue;
			else break;
			*/
		}
		else if (strcmp(Lecture, "m") == 0) {
			continue;
		}
		else {
			printf("적절한 과목명, e, 또는 m을 입력하세요\n");
			continue;
		}
	}

	getchar();
}
