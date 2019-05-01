#include <stdio.h>
#include <stdlib.h>
#pragma once
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

void SimpleRoomPrint(TimeTable info[N], int ok) {

	//test :: strcpy(info[0].RoomNum, "21302");

	int SimpleRoom; //int형으로 호수를 변경받을 변수
	char num[3]; //RoomNum의 뒤 세자리를 입력받을 문자열
	for (int i = 0; i < 3; i++) //RoomNum의 뒤 세자리 num[]에 전달
	{
		num[i] = info[ok].RoomNum[i + 2];
	}
	SimpleRoom = atoi(num); //num 문자열을 int형으로 변환해서 저장
	printf("%d호\n", SimpleRoom); //SimpleRoom 출력
}
