#include <stdio.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

extern int main(void);
extern int Input(TimeTable info[N]);
extern void SearchList(TimeTable info[N]);

int Menu(TimeTable info[N]) {

	int MenuChoice;

	while (1) {
	printf("1. �ð�ǥ ����\n");
	printf("2. �ð�ǥ �˻�\n");
	printf("3. ����\n");
	printf("��ȣ ����: ");

	scanf("%d", &MenuChoice);

		if (MenuChoice == 1) {
			Input(info);
			
		} else if(MenuChoice == 2) {
			SearchList(info);

		} else if(MenuChoice == 3) {
			printf("�������� ���ư��ϴ�.\n");
			printf("\n");
			main();
		}
	}

	return 0;
}
