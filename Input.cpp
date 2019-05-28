#include <stdio.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

/*
	test 값
	자료구조 2150189902 김익수 화 목 21203 12:00-13:15 정보과학관
	자료구조 2150189901 신용태 월 수 21201 15:00-16:15 정보과학관
	객체지향프로그래밍 2150674203 김익수 수 목 21201 15:00-16:15 정보과학관
	조직신화 2150458401 이용주 화 수 11516 12:00-13:15 진리관
	공적신학세미나 5039992901 이용주 월 금 22661 15:00-16:15 웨스트민스터홀
	중국어기초 2150155051 고재원 화 금 12402 12:00-13:15 조만식기념관
	
	//찾는 값이 없습니다.

*/
extern void BuildingSave(TimeTable info[N], int ok);
extern int Menu(TimeTable info[N]);

void Input(TimeTable info[N]) {

	static int count = 0;
	char choice[3] = "";

	while (1) {
		printf("===========================\n");

		printf("과목명 : ");
		scanf("%s", info[count].SubjectName);
		getchar();

		printf("과목번호 : ");
		scanf("%s", info[count].SubjectNum);
		getchar();

		printf("교수명 : ");
		scanf("%s", info[count].Prof);
		getchar();


		printf("요일 (ex.월 수) : ");
		scanf("%s %s", info[count].firstDay, info[count].secondDay);
		sprintf(info[count].DayOfWeek, "%s,%s", info[count].firstDay, info[count].secondDay);
		getchar();

		printf("교실번호 : ");
		scanf("%s", info[count].RoomNum);
		getchar();

		printf("수업 시간 (ex.HH:MM-HH:MM) : ");
		scanf("%s", info[count].Time);
		getchar();

		BuildingSave(info, count);
		printf("--------------------------\n");

		count++;

		printf("추가로 입력하시겠습니까?(Y/N) : ");
		scanf("%s", choice);
		getchar();

		if(strcmp(choice, "N")==0) Menu(info);
	}

	return;
}