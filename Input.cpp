#include <stdio.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

/*
	test ��
	��ȸ�μ���׽��� 2150322701 ���� ��ȭ 21203 16:30-18:20
	��ü�������α׷��� 2150534103 ������ ȭ�� 21204 18:00-19:15
	�ڷᱸ�� 2150533741 �ſ��� ���� 21201 15:00-16:15
	�ڷᱸ�� 2160533740 ���ͼ� ���� 21201 12:00-13:15

	�������а��� ���� ���� �ߴ� ���� �ذ�
*/
extern void BuildingSave(TimeTable info[N], int ok);

void Input(TimeTable info[N]) {

	static int count = 0;
	//Input() �� �� �ҷ��� ��,
	//info[0].SubjectName
	//info[1].SubjectName �̹Ƿ� static


	while (1) {

		printf("Subject Name: ");
		scanf("%s", info[count].SubjectName);

		printf("Subject Number: ");
		scanf("%s", info[count].SubjectNum);

		printf("Professor Name: ");
		scanf("%s", info[count].Prof);

		printf("Day of Week: ");
		scanf("%s", info[count].DayOfWeek);

		printf("Room Number: ");
		scanf("%s", info[count].RoomNum);

		printf("Lecture Time:(ex.HH:MM-HH:MM) ");
		scanf("%s", info[count].Time);

		BuildingSave(info, count); //21 ó�� ���� ���� ������ ����Ǹ� �� ��...

		printf("===========================\n");
		count++;
		break;
	}

	//(*pcount)++;
	return ;
}