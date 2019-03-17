#include <stdio.h>
#include <stdlib.h>

#pragma once
#define N 20 //ȸ�� ���� �ο� ��, ���ڼ�, �ð�ǥ���� ���� �� ���� ���
typedef struct NewUser {
	char ID[N];
	char PW[N];

} NewUser;
typedef struct TimeTable {
	char SubjectName[20];
	char SubjectNum[10];
	char Prof[10];
	char DayOfWeek[5];
	char RoomNum[5];
	char Time[20]; //�Է� ���� ��, ���� ��� (ex. HH:MM - HH:MM)
} TimeTable;

void SimpleRoomPrint(TimeTable info[], int ok) {
	int SimpleRoom; //int������ ȣ���� ������� ����
	char num[3]; //RoomNum�� �� ���ڸ��� �Է¹��� ���ڿ�
	for (int i = 0; i < 3; i++) //RoomNum�� �� ���ڸ� num[]�� ����
	{
		num[i] = info[ok].RoomNum[i + 2];
	}
	SimpleRoom = atoi(num); //num ���ڿ��� int������ ��ȯ�ؼ� ����
	printf("%dȣ\n", SimpleRoom); //SimpleRoom ���
}
