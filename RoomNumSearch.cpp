//교실 번호 검색 기능
#include<stdio.h>
#include<string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning (disable:4996)

extern int Input(TimeTable info[N]);
extern void SubjectNameSearch(TimeTable info[N]);
extern void SubjectNumSearch(TimeTable info[N]);
extern void ProfSearch(TimeTable info[N]);
extern void DaySearch(TimeTable info[N]);
extern void BuildingSave(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);


void RoomNumSearch(TimeTable info[N]) {

	printf("교실번호 입력: "); //맨 마지막에 입력한 값만 들어가네,,
	char WhatRoom[6];
	scanf("%s", WhatRoom);

	if (strcmp(WhatRoom, "e") == 0) {
		return;
	}

	for (int i = 0; i < N; i++) {
		
		if (strcmp(WhatRoom, info[i].RoomNum) == 0) {
			for (int j = 0, p = 0; j < N, p < N; j++, p++) {
				printf("%d. %s / %s / %s / ", p + 1, info[j].SubjectName, info[j].SubjectNum, info[j].Prof);
				for (int k = 0; k < N; k++) {
					if (strcmp(info[j].SubjectName, info[k].SubjectName) == 0)
						printf("%s : %s ", info[k].DayOfWeek, info[k].Time);
				}
				if (strcmp(info[j].SubjectName, info[j + 1].SubjectName) == 0)
					j++;
				printf("/ %s", info[j].UnivBuilding);

				
				printf(" ");
				SimpleRoomPrint(info, j);
				printf("\n");
				
				if (strcmp(WhatRoom, info[j + 1].RoomNum) != 0)
					break;
			}
			

			printf("추가 입력을 하시려면 아무 키나 입력하세요. 나가려면 e를 입력하세요: ");
			scanf("%s", WhatRoom);
			if (strcmp(WhatRoom, "e") == 0) {
				break;
			}
			else {
				RoomNumSearch(info);
				break;
			}
		}

		else {
			printf("잘못 입력하셨습니다. 다시 입력하십시오.\n\n");
			RoomNumSearch(info);
			break;
		}
	}
}
