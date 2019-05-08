#include <stdio.h>
#include <stdlib.h>
#pragma once
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

void SimpleRoomPrint(TimeTable info[N], int ok) {

	int SimpleRoom; 
	char num[3]; 
	for (int i = 0; i < 3; i++) 
	{
		num[i] = info[ok].RoomNum[i + 2];
	}
	SimpleRoom = atoi(num); 
	printf("%dȣ\n", SimpleRoom);
}
