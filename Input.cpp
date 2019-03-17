#include <stdio.h>
#define N 20;
#pragma warning (disable:4996)
// #include"C:\Users\남시현\Desktop\새 폴더 (2)\ciai03.h"

/*
	최종 제출 전
	Input 함수로 바꿀 때 
	int Input(TimeTable *info[N])
	으로 바꿔야함
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

	printf("과목명: ");
	scanf("%s", info[count].SubjectName);

	printf("과목번호: ");
	scanf("%s", info[count].SubjectNum);

	printf("교수명: ");
	scanf("%s", info[count].Prof);

	printf("요일: ");
	scanf("%s", info[count].DayOfWeek);

	printf("교실번호: ");
	scanf("%s", info[count].RoomNum);

	printf("수업시간: ");
	scanf("%s", info[count].Time);

	(*pcount)++;

	return 0;
}
