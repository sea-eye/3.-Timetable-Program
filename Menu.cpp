#include <stdio.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

extern int main(void);
extern int Input(TimeTable info[N]);
extern void SearchList(TimeTable info[N]);

int Menu(TimeTable info[N]) {

	int MenuChoice;

	while (1) {
	printf("1. 시간표 저장\n");
	printf("2. 시간표 검색\n");
	printf("3. 종료\n");
	printf("번호 선택: ");

	scanf("%d", &MenuChoice);

		if (MenuChoice == 1) {
			Input(info);
			
		} else if(MenuChoice == 2) {
			SearchList(info);

		} else if(MenuChoice == 3) {
			printf("메인으로 돌아갑니다.\n");
			printf("\n");
			main();
		}
	}

	return 0;
}
