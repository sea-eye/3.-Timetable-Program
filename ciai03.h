#include <string.h>
#pragma once
#define N 30 //ȸ�� ���� �ο� ��, ���ڼ�, �ð�ǥ���� ���� �� ���� ���
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
	char Time[20]; //�Է� ���� ��, ���� ��� (ex. HH:MM - HH:MM)
	char UnivBuilding[N];

} TimeTable;
