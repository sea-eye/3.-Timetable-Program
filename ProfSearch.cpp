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
		 
		 printf("������ �Է�:");
		 scanf("%s", WhoProf); //ERROR) subjectnum�� �ι� ������ i+1 �� �ε��� ����� ����� ����
		 getchar();

		 for (i = 0; i < N; i++) {

			 if (strcmp(WhoProf, "e") == 0) break;
			 else if (strcmp(WhoProf, info[i].Prof) == 0) {
				 printf("%d. %s / %s / %s / %s : %s / %s ", i + 1, info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
				 SimpleRoomPrint(info, i);
			 }

		 }
	if (i == 0) {
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�.");
		}
		printf("�߰��Է��Ϸ��� �ƹ� Ű�� �Է�, �������� e �Է�:\n");
		scanf("%s", end);
		getchar();
		 		if (strcmp(end,"e")!=0) {
			 			continue;
			
		}
				else SearchList(info);
		
	}
}
