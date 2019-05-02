#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

void BuildingSave(TimeTable info[N], int ok) {  //print 하지 말고... 차라리 저장이라고 하자...
	
	//test :: strcpy(info[0].RoomNum, "21302");
	//info[ok].UnivBuilding에 저장

	int Building[N]; //int형으로 호수를 변경받을 변수
	char SSU[N][10] = { "" };
	int i, j;

	char b_num[2];

	for (i = 0; i < N; i++) {
		for (j = 0; j < 2; j++)
		{
			b_num[j] = info[ok].RoomNum[j];
		}
		Building[i] = atoi(b_num); //b_num 문자열을 int형으로 변환해서 저장

		printf("번호 %d의 건물 이름 입력 : ", Building[i]);
		scanf("%s", SSU[i]);
		break;
	}

	strcpy(info[ok].UnivBuilding, SSU[ok]);

	//구조체에 따로 저장해서 뱉기 .. printf("%s", SSU[ok]);

}