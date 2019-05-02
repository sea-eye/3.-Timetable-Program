#include<stdio.h> 
#include<string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning (disable:4996)

extern void BuildingSave(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
extern int SearchList(TimeTable info[N]);

 void ProfSearch(TimeTable info[N]) {
	
	 char WhoProf[10] = "";

	 int i;

	 int count;

	 while (1) {

		 count = 0;

		 printf("(나가려면 e를 입력하세요)\n");
		 printf("검색할 교수명 : ");
		 scanf("%s", WhoProf);
		 getchar();

		 for (i = 0; i < N; i++) {

			 if (strcmp(WhoProf, "e") == 0) {
				 SearchList(info);
			 }
			 else if (strcmp(WhoProf, info[i].Prof) == 0) {

				 printf("%d. %s / %s / %s / %s : %s / %s ", count + 1, info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
				 SimpleRoomPrint(info, i);
				 count++;
				
			 }
			 else
				 break;

		 }
	 }
}
