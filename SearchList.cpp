#include <stdio.h>
#include <string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning(disable:4996)

void SearchList() {

	int ListChoice;

	printf("1. ����� �˻�\n");
	printf("2. �����ȣ �˻�\n");
	printf("3. ������ �˻�\n");
	printf("4. ���Ϻ� �˻�\n");
	printf("5. ���ǹ�ȣ �˻�\n");
	printf("6. �޴��� ���ư���\n");

	while (1) {
		printf("��ȣ���� : \n");
		scanf("%d", &ListChoice);
		/*if (ListChoice == 1)
			//SubjectNameSearch(info);
		else if (ListChoice == 2)
			//SubjectNumSearch(info);
		else if (ListChoice == 3)
			//ProfSearch(info);
		else if (ListChoice == 4)
			DaySearch(info);
		/*else if (ListChoice == 5)
			//RoomNumSearch(info);
		else if (ListChoice == 6)
			printf("<�޴�>\n");
		else
			printf("�߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ���.\n");
			*/
	}
}
int main(void){
	SearchList();
	return 0;


}