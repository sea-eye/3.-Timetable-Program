//���� ��ȣ �˻� ���
#include<stdio.h>
#include<string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning (disable:4996)

extern void BuildingSave(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
extern void SearchList(TimeTable info[N]);

void RoomNumSearch(TimeTable info[N]) {

	char WhatRoom[6] = "";
	char Exit[20] = "";
	int i;
	int count;

	count = 0;

	printf("(�������� e�� �Է��ϼ���)\n");
	printf("�˻��� ���� ��ȣ(ex.21201) : ");
	scanf("%s", WhatRoom);

	if (strcmp(WhatRoom, "e") == 0) {
		SearchList(info);
	}

	for (i = 0; i < N; i++) {

		if (strcmp(WhatRoom, info[i].RoomNum) == 0) {

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
		RoomNumSearch(info);
}
