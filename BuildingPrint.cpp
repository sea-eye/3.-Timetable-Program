#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

int LinearSearch(int isSame[], int len, int target) {
	
	int idx = 0;
	for (; idx < len; idx++) {
		if (isSame[idx] == target) {
			return idx;
		}
	}
	return -1;
}

void BuildingSave(TimeTable info[N], int ok) {  
	
	//test :: strcpy(info[0].RoomNum, "21302");
	//info[ok].UnivBuilding에 저장
	//중복으로 저장되는 현상
	//탐색

	int Building[N]; 
	char SSU[N][10] = { "" };
	int i, j;

	char b_num[2];

	for (i = 0; i < N; i++) {
		for (j = 0; j < 2; j++)
		{
			b_num[j] = info[ok].RoomNum[j];
		}
		
		Building[i] = atoi(b_num);
		
		printf("번호 %d의 건물 이름 입력 : ", Building[i]);
		scanf("%s", SSU[i]);
		break;
	}

	strcpy(info[ok].UnivBuilding, SSU[ok]);

}
