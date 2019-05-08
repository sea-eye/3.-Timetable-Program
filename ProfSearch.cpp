#include<stdio.h> 
#include<string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning (disable:4996)

extern void BuildingSave(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
extern void SearchList(TimeTable info[N]);

void ProfSearch(TimeTable info[N]) {

	char WhoProf[10] = "";
	char Exit[10] = "";
	int i;
	int count;

	count = 0;

	printf("(�������� e�� �Է��ϼ���)\n");
	printf("�˻��� ������(ex.�̿���) : ");
	scanf("%s", WhoProf);

	if (strcmp(WhoProf, "e") == 0) {
		SearchList(info);
	}

	for (i = 0; i < N; i++) {

		if (strcmp(WhoProf, info[i].Prof) == 0) {

			printf("%d. %s / %s / %s / %s : %s / %s ", count + 1, info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
			SimpleRoomPrint(info, i);
			count++;
		}

	}

	printf("--------------------------\n");

	printf("�߰��Է��Ϸ��� �ƹ�Ű�� �Է�, �������� e �Է� : ");
	scanf("%s", Exit);
	if (!strcmp(Exit, "e"))
		SearchList(info);
	else
		ProfSearch(info);
}