#include <stdio.h>
#define N 20;
#pragma warning (disable:4996)
// #include"C:\Users\������\Desktop\�� ���� (2)\���.h"	// �Խ��ǿ� ������� �ߴµ� ���� ���� �ּ�ó�� �س����ϴ�..�Ф�

/*
	���� ���� ��
	Input �Լ��� �ٲ� �� 
	int Input(TimeTable *info[N])
	���� �ٲ����
*/

typedef struct TimeTable {
	char SubjectName[20];
	char SubjectNum[10];
	char Prof[10];
	char DayOfWeek[5];
	char RoomNum[5];
	char Time[20];
} TimeTable;

int Input(TimeTable info[]);

int main() {
	TimeTable info[20];

	int a;
	a = Input(info);

}

int Input(TimeTable info[]) {
	int count = 0;
	int *pcount = &count;

	printf("�����: ");
	scanf("%s", info[count].SubjectName);

	printf("�����ȣ: ");
	scanf("%s", info[count].SubjectNum);

	printf("������: ");
	scanf("%s", info[count].Prof);

	printf("����: ");
	scanf("%s", info[count].DayOfWeek);

	printf("���ǹ�ȣ: ");
	scanf("%s", info[count].RoomNum);

	printf("�����ð�: ");
	scanf("%s", info[count].Time);

	(*pcount)++;

	return 0;
}
