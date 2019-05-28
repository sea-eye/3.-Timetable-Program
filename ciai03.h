#include <string.h>
#pragma once
#define N 30 //회원 가입 인원 수, 글자수, 시간표에서 과목 수 제한 등등
typedef struct NewUser {
	char ID[N];
	char PW[N];
	char testPW[N];
} NewUser;
typedef struct TimeTable {
	char SubjectName[20];
	char SubjectNum[20];
	char Prof[10];
	char DayOfWeek[7] = "";
	char firstDay[3];
	char secondDay[3];
	char RoomNum[6];
	char Time[20]; //입력 받을 때, 형식 명시 (ex. HH:MM - HH:MM)
	char UnivBuilding[N];

} TimeTable;
