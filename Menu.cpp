#include <stdio.h>
#define N 20;
#pragma warning (disable:4996)
#include"C:\Users\남시현\Desktop\새 폴더 (2)\ciai03.h"

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

	printf("1. 시간표 저장\n");
	printf("2. 시간표 검색\n");
	printf("3. 종료\n");
	printf("번호 선택: ");

	scanf("%d", &MenuChoice);

	while (1) {
		if (MenuChoice == 1) {
			Input(info);
		} else if(MenuChoice == 2) {
			SearchList();
		} else if(MenuChoice == 3) {
			printf("메인으로 돌아갑니다.\n");
			printf("\n");
			break;
		}
	}

	return 0;
}