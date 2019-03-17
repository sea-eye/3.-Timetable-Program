#include<stdio.h>
#include<string.h>
#pragma once
#pragma warning (disable:4996)
#define N 20 //회원 가입 인원 수, 글자수, 시간표에서 과목 수 제한 등등
typedef struct NewUser {
	char ID[N];
	char PW[N];
} NewUser;
typedef struct TimeTable {
	char SubjectName[20];
	char SubjectNum[20];
	char Prof[10];
	char DayOfWeek[5];
	char RoomNum[6];
	char Time[20]; //입력 받을 때, 형식 명시 (ex. HH:MM - HH:MM)
} TimeTable;

char SubjectNumSearch(TimeTable []);
int main() {
	TimeTable info[2];
	for (int i = 0; i < 2; i++) {
		strcpy(info[i].SubjectName, "자료구조");
		strcpy(info[i].SubjectNum, "2150686201");
		strcpy(info[i].Time, "13:30-14:45");
	}
	strcpy(info[0].DayOfWeek, "수");
	strcpy(info[1].DayOfWeek, "금");
	char key;
	key = SubjectNumSearch(info);
		for (int i = 0; i < N; i++) {
			if (key != 'e') {
				printf("<추가로 입력 합니다>\n");
			SubjectNumSearch(info);
		}
			else {
				break;
				}
	}

}
char SubjectNumSearch(TimeTable info[]) {
	char LectureNum[10], anykey;
	while (1) {
		printf("과목번호를 입력하세요:");
		scanf("%s", LectureNum);
		if (strlen(LectureNum) < 10) {
			printf("잘못 입력하셨습니다. 다시 입력하십시오.\n");
			continue;
		}
		else
			break;
	}
	getchar();
	if (strcmp(LectureNum,info[0].SubjectName) || strcmp(LectureNum,info[1].SubjectName)) {
		printf("자료구조 /수: 13:30-14:45 금: 13:30-14:45 / 정보과학관 302호\n 추가입력 하려면 아무 키나 입력하세요. (나가려면 e키 입력)");
		
		scanf("%c", &anykey);

		return anykey;
	}
}