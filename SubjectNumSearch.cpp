#include<stdio.h>
#include<string.h>
#pragma once
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"


extern void BuildingPrint(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);
//�Լ� �̰� �ΰ��� �ҷ��� �ǳ�?

void SubjectNumSearch(TimeTable info[N]) {
	
	int i;
	char LectureNum[20];

	for (i = 0; i < N; i++) {

		printf("�����ȣ�� �Է��ϼ��� :  (�����Ϸ��� e, �ٸ� ������ �Է��Ͻ÷��� m�� �Է��ϼ���)\n");
		scanf("%s", LectureNum);

		if (strcmp(LectureNum, "e") == 0) {
			break;
		}
		else if (strcmp(LectureNum, info[i].SubjectNum) == 0) {


			printf("%s / %s / %s / %s : %s / %s ", info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
			SimpleRoomPrint(info, i);

			getchar();
			i = 0;
			break;

			//���Ŀ� ��ȣ�������� �ٷΰ��°� �ƴ϶� �˻��� ������ �߰��� �Է��Ͻðڽ��ϱ�? �̷��� ������ ������

		}
		else if (strcmp(LectureNum, "m") == 0) {
			continue;
		}
		else {
			printf("������ �����ȣ, e, �Ǵ� m�� �Է��ϼ���\n");
			continue;
		}
	}
}