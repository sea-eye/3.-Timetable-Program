#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

extern void BuildingPrint(TimeTable info[N], int ok);
extern void SimpleRoomPrint(TimeTable info[N], int ok);

void SubjectNameSearch(TimeTable *info) {

	char Lecture[20] = "";
	//char addSub[10] = "";
	//���� �̸��� ������ ���� �� �ȶ߰� ������ ���� ����
	//�׸����� �ѹ��� �����Ϸ��ϸ� �ʱ�ȭ��...

	int i;

	for (i = 0; i < N; i++) {

		printf("������� �Է��ϼ��� :  (�����Ϸ��� e, �ٸ� ������ �Է��Ͻ÷��� m�� �Է��ϼ���)\n");
		scanf("%s", Lecture);

		if (strcmp(Lecture, "e") == 0) {
			break;
		}
		else if (strcmp(Lecture, info[i].SubjectName) == 0) {

			

				printf("%s / %s / %s / %s : %s / %s ", info[i].SubjectName, info[i].SubjectNum, info[i].Prof, info[i].DayOfWeek, info[i].Time, info[i].UnivBuilding);
				SimpleRoomPrint(info, i);

				getchar();

			
			/*printf("���� �˻��� �߰��� �Ͻðڽ��ϱ�?(Y/N)");
			scanf("%s", addSub);

			if (strcmp(addSub, "Y") == 0)
				continue;
			else break;
			*/
		}
		else if (strcmp(Lecture, "m") == 0) {
			continue;
		}
		else {
			printf("������ �����, e, �Ǵ� m�� �Է��ϼ���\n");
			continue;
		}
	}

	getchar();
}
