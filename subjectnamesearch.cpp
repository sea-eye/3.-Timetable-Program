#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
#include "C:\Users\robby\Desktop\ciai03\ciai03.h"
#define N 20


/*typedef struct TimeTable {
	char SubjectName[20];
	char SubjectNum[11];
	char Prof[10];
	char DayOfWeek[5];
	char RoomNum[6];
	char Time[20];  //입력 받을 때, 형식 명시 (ex. HH:MM - HH:MM)
}TimeTable;*/

TimeTable info[N];
int i = 0;

void SubjectNameSearch(TimeTable info[N]) {
	char Lecture[20];
	strcpy(info[0].Time, "11:00-12:30");
	strcpy(info[0].SubjectName, "자료구조");
	strcpy(info[1].SubjectName, "자료구조");
	strcpy(info[0].SubjectNum, "2150686201");
	strcpy(info[1].SubjectNum, "2150686201");
	strcpy(info[0].Prof, "김익수");
	strcpy(info[0].DayOfWeek, "수");
	strcpy(info[1].DayOfWeek, "금");
	strcpy(info[0].RoomNum, "21302");


	for (i = 0; i < N; i++) {
		printf("과목명을 입력하세요 :  (종료하려면 e, 다른 과목을 입력하시려면 m을 입력하세요)\n");
		scanf("%s", Lecture);
		if (strcmp(Lecture, "e") == 0) {
			break;
		}
		else if (strcmp(Lecture, info[i].SubjectName) == 0) {
			
			printf("%s / %s / %s / %s / %s", info[i].SubjectName, info[i].DayOfWeek, info[i].Time, info[i].RoomNum, info[i].SubjectNum);
			getchar();
			i = 0;
			break;
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
int main(void) {
	SubjectNameSearch(info);
	return 0;
}
		
		//BuildingPrint(info,i);
		//SimpleRoomPrint(info,i);
	

