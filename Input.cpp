#include <stdio.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

/*
	test 값
	논리회로설계및실험 2150322701 장훈 월화 21203 16:30-18:20
	객체지향프로그래밍 2150534103 최지웅 화금 21204 18:00-19:15
	자료구조 2150533741 신용태 월수 21201 15:00-16:15
	자료구조 2160533740 김익수 월수 21201 12:00-13:15

	정보과학관이 끊임 없이 뜨는 문제 해결
*/
extern void BuildingSave(TimeTable info[N], int ok);

void Input(TimeTable info[N]) {

	static int count = 0;
	//Input() 두 번 불렀을 때,
	//info[0].SubjectName
	//info[1].SubjectName 이므로 static


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

		BuildingSave(info, count); //21 처럼 같은 값이 있으면 실행되면 안 됨...

		printf("===========================\n");
		count++;
		break;
	}

	//(*pcount)++;
	return ;
}