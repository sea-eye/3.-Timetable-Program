#include <stdio.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

/*
	test ��
	��ȸ�μ���׽��� 2150322701 ���� ��ȭ 21203 16:30-18:20
	��ü�������α׷��� 2150534103 ������ ȭ�� 21204 18:00-19:15
	�ڷᱸ�� 2150533741 �ſ��� ���� 21201 15:00-16:15
	�ڷᱸ�� 2160533740 ���ͼ� ���� 21201 12:00-13:15
*/
extern void BuildingSave(TimeTable info[N], int ok);
int Input(TimeTable info[N]) {

	int count = 0;
	int *pcount;
	pcount = &count;

	while (1) {

		printf("Subject Name: ");
		scanf("%s", info[*pcount].SubjectName);

		printf("Subject Number: ");
		scanf("%s", info[*pcount].SubjectNum);

		printf("Professor Name: ");
		scanf("%s", info[*pcount].Prof);

		printf("Day of Week: ");
		scanf("%s", info[*pcount].DayOfWeek);

		printf("Room Number: ");
		scanf("%s", info[*pcount].RoomNum);

		printf("Lecture Time:(ex.HH:MM-HH:MM) ");
		scanf("%s", info[*pcount].Time);

		BuildingSave(info, *pcount); //21 ó�� ���� ���� ������ ����Ǹ� �� ��...

		printf("===========================\n");
		(*pcount)++;
		break;
	}

	//(*pcount)++;
	return 0;
}