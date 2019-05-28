#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

extern void BuildingPrint(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
extern void SearchList(TimeTable info[N]);
void SubjectNameSearch(TimeTable info[N]);

void SubjectNameSearch(TimeTable info[N]) {

	char Lecture[20] = "";
	char Exit[20] = "";
	int i;
	int count;


		count = 0;

		printf("(나가려면 e를 입력하세요)\n");
		printf("검색할 과목명(ex.자료구조) : ");
		scanf("%s", Lecture);
	

		if (strcmp(Lecture, "e") == 0) {
			SearchList(info);
		}

		for (i = 0; i < N; i++) {

			if (strcmp(Lecture, info[i].SubjectName) == 0) {
			
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
			SubjectNameSearch(info);


}
