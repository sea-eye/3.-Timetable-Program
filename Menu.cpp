#include <stdio.h>
#define N 20;
#pragma warning (disable:4996)
#include"C:\Users\������\Desktop\�� ���� (2)\ciai03.h"

int Menu(TimeTable info[]);
int Input(TimeTable info[]);
int SearchList();


int main() {
	TimeTable info[20];
	Menu(info);
	return 0;
}

int Menu(TimeTable info[]) {
	int MenuChoice;

	printf("1. �ð�ǥ ����\n");
	printf("2. �ð�ǥ �˻�\n");
	printf("3. ����\n");
	printf("��ȣ ����: ");

	scanf("%d", &MenuChoice);

	while (1) {
		if (MenuChoice == 1) {
			Input(info);
		} else if(MenuChoice == 2) {
			SearchList();
		} else if(MenuChoice == 3) {
			printf("�������� ���ư��ϴ�.\n");
			printf("\n");
			break;
		}
	}

	return 0;
}