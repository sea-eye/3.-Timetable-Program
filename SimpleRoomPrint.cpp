#include <stdio.h>
#include <stdlib.h>
#pragma once
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

void SimpleRoomPrint(TimeTable info[N], int ok) {

	//test :: strcpy(info[0].RoomNum, "21302");

	int SimpleRoom; //int������ ȣ���� ������� ����
	char num[3]; //RoomNum�� �� ���ڸ��� �Է¹��� ���ڿ�
	for (int i = 0; i < 3; i++) //RoomNum�� �� ���ڸ� num[]�� ����
	{
		num[i] = info[ok].RoomNum[i + 2];
	}
	SimpleRoom = atoi(num); //num ���ڿ��� int������ ��ȯ�ؼ� ����
	printf("%dȣ\n", SimpleRoom); //SimpleRoom ���
}
