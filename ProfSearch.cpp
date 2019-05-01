#include<stdio.h> 
#include<string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning (disable:4996)

extern void BuildingSave(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
extern void SearchList(TimeTable info[N]);

 void ProfSearch(TimeTable info[N]) {
	 int i, j;
	 char end[5] = "";
	 char WhoProf[10] = "";

	 for (j = 0; j < N; j++) {
		 
		 printf("교수명 입력:");
		 scanf("%s", WhoProf); //ERROR) subjectnum이 두번 나오고 i+1 이 인덱스 기능을 제대로 못함
		 getchar();

		 for (i = 0; i < N; i++) {

			 if (strcmp(WhoProf, "e") == 0) break;
			 else if (strcmp(WhoProf, info[i].Prof) == 0) {
				 printf("%d. %s / %s / %s / %s : %s / %s ", i + 1, info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
				 SimpleRoomPrint(info, i);
			 }

		 }
	if (i == 0) {
		printf("잘못 입력하셨습니다. 다시 입력하십시오.");
		}
		printf("추가입력하려면 아무 키나 입력, 나가려면 e 입력:\n");
		scanf("%s", end);
		getchar();
		 		if (strcmp(end,"e")!=0) {
			 			continue;
			
		}
				else SearchList(info);
		
	}
}
