#include <stdio.h>
#include <string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning(disable:4996)
//[DaySearch()] - ���Ϻ� �˻�

//BuildingPrint(info, i); �� �� �� �ּ� ó��
//SimpleRoomPrint(info, i); �� �� �� �ּ� ó��
TimeTable info[N] = {

	{ "�ڷᱸ��", "2150686201", "���ͼ�", "��", "0", "13:30 - 15:00" },
{ "��ǻ�ͱ���", "2150686301", "����", "��", "0", "13:30 - 15:00" } };

void DaySearch(TimeTable info[N]) {
	char WhatDay[5];
	char ExitDay[2];
	
	int i;

	while (1) {

		printf("���� �Է�(ex.��) : ");
		scanf("%s", WhatDay);
		if (!strcmp(WhatDay, "��") == 0 && !strcmp(WhatDay, "ȭ") == 0 && !strcmp(WhatDay, "��") == 0 && !strcmp(WhatDay, "��") == 0 && !strcmp(WhatDay, "��") == 0 && !strcmp(WhatDay, "��") == 0 && !strcmp(WhatDay, "��") == 0)
		{
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�.\n\n");
			continue;
		}

		for (i = 0; i < N; i++) {

			if (strcmp(WhatDay, "e") == 0) break;
			else if (strcmp(WhatDay, info[i].DayOfWeek) == 0) {
				printf("%d. %s %s %s %s %s\n", i + 1, info[i].SubjectName, info[i].SubjectNum, info[i].Prof, WhatDay, info[i].Time);

			}

		}

		printf("�߰��Է��Ϸ��� �ƹ�Ű�� �Է�, �������� e �Է� :");
		scanf("%s", ExitDay);
		if (strcmp(ExitDay, "e") == 0) break;
		printf("<�߰��� �Է��մϴ�>\n\n");
	}

}
int main(void) {
	DaySearch(info);
	return 0;
}