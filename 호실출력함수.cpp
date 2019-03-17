#include <stdio.h>
#include <stdlib.h>

#pragma once
#define N 20 //회원 가입 인원 수, 글자수, 시간표에서 과목 수 제한 등등
typedef struct NewUser {
	char ID[N];
	char PW[N];

} NewUser;
typedef struct TimeTable {
	char SubjectName[20];
	char SubjectNum[10];
	char Prof[10];
	char DayOfWeek[5];
	char RoomNum[5];
	char Time[20]; //입력 받을 때, 형식 명시 (ex. HH:MM - HH:MM)
} TimeTable;

void SimpleRoomPrint(TimeTable info[], int ok) {
	int SimpleRoom; //int형으로 호수를 변경받을 변수
	char num[3]; //RoomNum의 뒤 세자리를 입력받을 문자열
	for (int i = 0; i < 3; i++) //RoomNum의 뒤 세자리 num[]에 전달
	{
		num[i] = info[ok].RoomNum[i + 2];
	}
	SimpleRoom = atoi(num); //num 문자열을 int형으로 변환해서 저장
	printf("%d호\n", SimpleRoom); //SimpleRoom 출력
}
