#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

extern void BuildingPrint(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
extern int SearchList(TimeTable info[N]);

void SubjectNameSearch(TimeTable info[N]) {

	char Lecture[20] = "";
	int i;
	int count;

	while (1) {

		count = 0;

		printf("(나가려면 e를 입력하세요)\n");
		printf("검색할 과목명 : "); //과목검색이 하나밖에 안 되는 현상 발생..
		scanf("%s", Lecture); //객체지향프로그래밍
		getchar();

		printf("first %d\n", count);


		for (i = 0; i < N; i++) {

			if (strcmp(Lecture, "e") == 0) {
				printf("e %d\n", count);
				SearchList(info);
			}
			else if (strcmp(Lecture, info[i].SubjectName) == 0) {
			
				printf("%d. %s / %s / %s / %s : %s / %s ", count+1, info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
				SimpleRoomPrint(info, i);
				count++;

			}
			else
				break;

			printf("--------------------------\n");
		}

	}
}