#include <stdio.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

/*
	test 값
	논리회로설계및실험 2150322701 장훈 월화 21203 16:30-18:20
	객체지향프로그래밍 2150534103 최지웅 화금 21204 18:00-19:15
	자료구조 2150533741 신용태 월수 21201 15:00-16:15
	자료구조 2160533740 김익수 월수 21201 12:00-13:15
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

		BuildingSave(info, *pcount); //21 처럼 같은 값이 있으면 실행되면 안 됨...

		printf("===========================\n");
		(*pcount)++;
		break;
	}

	//(*pcount)++;
	return 0;
}