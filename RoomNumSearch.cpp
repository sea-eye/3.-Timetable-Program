//���� ��ȣ �˻� ���
#include<stdio.h>
#include<string.h>
//#include "C:\Users\jonge\Desktop\ciai03.h"
#pragma once
#define N 20 //ȸ�� ���� �ο� ��, ���ڼ�, �ð�ǥ���� ���� �� ���� ���
typedef struct NewUser {
   char ID[N];
   char PW[N];

} NewUser;
typedef struct TimeTable {
   char SubjectName[20];
   char SubjectNum[20];
   char Prof[10];
   char DayOfWeek[5];
   char RoomNum[6];
   char Time[20]; //�Է� ���� ��, ���� ��� (ex. HH:MM - HH:MM)
} TimeTable;

//BuildingPrint(info, i);
//SimpleRoomPrint(info, i);

void RoomNumSearch(TimeTable info[N]);

int main(void) {
	TimeTable info[N] = {
		{"�ڷᱸ��", "2150686201", "���ͼ�", "��", "21302", "13:00-14:45"},
	{"�ڷᱸ��", "2150685201", "���ͼ�", "��", "21302", "13:00-14:45"},
	{"��ǻ�ͱ���", "2150686301", "�躴��", "��", "21302", "15:00-16:15"},
	{"��ǻ�ͱ���", "2150686301", "�躴��", "��", "21302", "15:00-16:15"} };
	RoomNumSearch(info);

}

void RoomNumSearch(TimeTable info[N]) {

	printf("���ǹ�ȣ �Է�: ");
	char WhatRoom[6];
	scanf("%s", WhatRoom);

	if (strcmp(WhatRoom, "e") == 0) {
		return;
	}

	for (int i = 0; i < N; i++) {
		/*	if (strcmp(WhatRoom, "e") == 0) {
				break;
			}*/
		if (strcmp(WhatRoom, info[i].RoomNum) == 0) {
			for (int j = 0, p = 0; j < N, p < N; j++, p++) {
				printf("%d. %s / ", p + 1, info[j].SubjectName);
				for (int k = 0; k < N; k++) {
					if (strcmp(info[j].SubjectName, info[k].SubjectName) == 0)
						printf("%s: %s ", info[k].DayOfWeek, info[k].Time);
				}
				if (strcmp(info[j].SubjectName, info[j + 1].SubjectName) == 0)
					j++;
				printf("/ ");
				//BuildingPrint(info, i);
				printf(" ");
				//SimpleRoomPrint(info, i);
				printf("\n");
				
				if (strcmp(WhatRoom, info[j + 1].RoomNum) != 0)
					break;
			}
			

			printf("�߰� �Է��� �Ͻ÷��� �ƹ� Ű�� �Է��ϼ���. �������� e�� �Է��ϼ���: ");
			scanf("%s", WhatRoom);
			if (strcmp(WhatRoom, "e") == 0) {
				break;
			}
			else {
				RoomNumSearch(info);
			}
		}

		else {
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�.\n");
			RoomNumSearch(info);
			break;
		}
	}
}
