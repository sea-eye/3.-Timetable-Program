#include<stdio.h>
#include<string.h>
#pragma once
#pragma warning (disable:4996)
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

char SubjectNumSearch(TimeTable []);
int main() {
	TimeTable info[2];
	for (int i = 0; i < 2; i++) {
		strcpy(info[i].SubjectName, "�ڷᱸ��");
		strcpy(info[i].SubjectNum, "2150686201");
		strcpy(info[i].Time, "13:30-14:45");
	}
	strcpy(info[0].DayOfWeek, "��");
	strcpy(info[1].DayOfWeek, "��");
	char key;
	key = SubjectNumSearch(info);
		for (int i = 0; i < N; i++) {
			if (key != 'e') {
				printf("<�߰��� �Է� �մϴ�>\n");
			SubjectNumSearch(info);
		}
			else {
				break;
				}
	}

}
char SubjectNumSearch(TimeTable info[]) {
	char LectureNum[10], anykey;
	while (1) {
		printf("�����ȣ�� �Է��ϼ���:");
		scanf("%s", LectureNum);
		if (strlen(LectureNum) < 10) {
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�.\n");
			continue;
		}
		else
			break;
	}
	getchar();
	if (strcmp(LectureNum,info[0].SubjectName) || strcmp(LectureNum,info[1].SubjectName)) {
		printf("�ڷᱸ�� /��: 13:30-14:45 ��: 13:30-14:45 / �������а� 302ȣ\n �߰��Է� �Ϸ��� �ƹ� Ű�� �Է��ϼ���. (�������� eŰ �Է�)");
		
		scanf("%c", &anykey);

		return anykey;
	}
}