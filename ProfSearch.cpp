#include<stdio.h>
#include<string.h>
#include"C:\Users\sewon\Desktop\�� ����\ciai03.h"

//TimeTable info[N];
//BuildingPrint(info,i);
//SimpleRoomPrint(info,i);
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
				/*else{
					  printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է��Ͻʽÿ�.");
					  break;}*/
			}
		}
		printf("�߰��Է��Ϸ��� �ƹ� Ű�� �Է�(����), �������� e �Է�:\n");
		scanf("%s", &end);
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