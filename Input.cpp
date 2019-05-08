#include <stdio.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

/*
	test 값
	자료구조 2150189902 김익수 화목 21203 12:00-13:15 정보과학관
	자료구조 2150189901 신용태 월수 21201 15:00-16:15 정보과학관
	프로그래밍기초및실습 2150674203 김익수 수목 21201 15:00-16:15 정보과학관
	조직신화 2150458401 이용주 화수 11516 12:00-13:15 진리관
	공적신학세미나 5039992901 이용주 월 22661 15:00-16:15 웨스트민스터홀
	---왜 웨스트민스터홀61호로 출력되지..?

	Building 함수가 제대로 초기화 되지 않는 문제,,
	추가로 저장하시겠습니까?
*/
extern void BuildingSave(TimeTable info[N], int ok);

void Input(TimeTable info[N]) {

	static int count = 0;


	while (1) {

		printf("과목명 : ");
		scanf("%s", info[count].SubjectName);
		getchar();

		printf("과목번호 : ");
		scanf("%s", info[count].SubjectNum);
		getchar();

		printf("교수명 : ");
		scanf("%s", info[count].Prof);
		getchar();

		printf("요일 : ");
		scanf("%s", info[count].DayOfWeek);
		getchar();

		printf("교실번호 : ");
		scanf("%s", info[count].RoomNum);
		getchar();

		printf("수업 시간:(ex.HH:MM-HH:MM) ");
		scanf("%s", info[count].Time);
		getchar();

		BuildingSave(info, count);

		printf("===========================\n");
		count++;
		break;
	}

	return;
}