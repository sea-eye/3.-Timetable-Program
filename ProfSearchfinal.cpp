#include<stdio.h> 
 #include<string.h>
 #include"C:\Users\sewon\Desktop\새 폴더\ciai03.h"
//#define N 20
#define M 30

 //TimeTable info[N]; 
 //BuildingPrint(info,i); 
 //SimpleRoomPrint(info,i); 
/*typedef struct TimeTable {
	char SubjectName[30];
	char SubjectNum[N];
	char Prof[M];
	char DayOfWeek[5];
	char RoomNum[6];
	char Time[20];
}TimeTable;*/
TimeTable info[N] = {
 	  {"자료구조","215068620","김익수","수","","13:30-14:45"},
 	  {"자료구조","215068620","김익수","금","","13:30-14:45"},
 	  {"프로그래밍1","501023160","김익수","화","","10:00-11:50"},
 	  {"프로그래밍1","501023160","김익수","목","","10:00-11:50"} };


 void ProfSearch(TimeTable info[N]) {
	 	int a, b, i, count = 0;
	 	char end, WhoProf[10];
	 	for (i = 0; i < N; i++) {
 		printf("교수명 입력:");
 		scanf("%s", &WhoProf);
 		getchar();
 	for (a = 0; a < N; a++) {
	for (b = a + 1; b < N + 1; b++) {
 	if (strcmp(WhoProf, info[b - 1].Prof) == 0) {
 	if (strcmp(info[a].SubjectNum, info[b].SubjectNum) == 0) {
			count++;
	printf("%d. %s / %s %s %s %s /", count, info[a].SubjectName, info[b - 1].DayOfWeek, info[b - 1].Time, info[b].DayOfWeek, info[b].Time);
						

							 	//              BuildingPrint(info,i); 
							 	//              printf(" / "); 
							 	//              SimpleRoomPrint(info,i); 
					printf("\n");						
}					
}		
}
		}
	if (count == 0) {
		printf("잘못 입력하셨습니다. 다시 입력하십시오.");
		}
		printf("추가입력하려면 아무 키나 입력(영문), 나가려면 e 입력:\n");
		scanf("%s", &end);
		getchar();
		 		if (end != 'e') {
			 			continue;
			
		}
		 		else {
			 			break;
			
		}
		
	}
}


 int main(void)
 {
 	ProfSearch(info);
 	getchar();
 	return 0;
 }
