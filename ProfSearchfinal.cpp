#include<stdio.h> 
 #include<string.h>
 #include"C:\Users\sewon\Desktop\�� ����\ciai03.h"
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
 	  {"�ڷᱸ��","215068620","���ͼ�","��","","13:30-14:45"},
 	  {"�ڷᱸ��","215068620","���ͼ�","��","","13:30-14:45"},
 	  {"���α׷���1","501023160","���ͼ�","ȭ","","10:00-11:50"},
 	  {"���α׷���1","501023160","���ͼ�","��","","10:00-11:50"} };


 void ProfSearch(TimeTable info[N]) {
	 	int a, b, i, count = 0;
	 	char end, WhoProf[10];
	 	for (i = 0; i < N; i++) {
 		printf("������ �Է�:");
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
		printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�.");
		}
		printf("�߰��Է��Ϸ��� �ƹ� Ű�� �Է�(����), �������� e �Է�:\n");
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
