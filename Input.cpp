#include <stdio.h>
#pragma warning (disable:4996)
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

/*
	test ��
	�ڷᱸ�� 2150189902 ���ͼ� ȭ�� 21203 12:00-13:15 �������а�
	�ڷᱸ�� 2150189901 �ſ��� ���� 21201 15:00-16:15 �������а�
	���α׷��ֱ��ʹ׽ǽ� 2150674203 ���ͼ� ���� 21201 15:00-16:15 �������а�
	������ȭ 2150458401 �̿��� ȭ�� 11516 12:00-13:15 ������
	�������м��̳� 5039992901 �̿��� �� 22661 15:00-16:15 ����Ʈ�ν���Ȧ
	---�� ����Ʈ�ν���Ȧ61ȣ�� ��µ���..?

	Building �Լ��� ����� �ʱ�ȭ ���� �ʴ� ����,,
	�߰��� �����Ͻðڽ��ϱ�?
*/
extern void BuildingSave(TimeTable info[N], int ok);

void Input(TimeTable info[N]) {

	static int count = 0;


	while (1) {

		printf("����� : ");
		scanf("%s", info[count].SubjectName);
		getchar();

		printf("�����ȣ : ");
		scanf("%s", info[count].SubjectNum);
		getchar();

		printf("������ : ");
		scanf("%s", info[count].Prof);
		getchar();

		printf("���� : ");
		scanf("%s", info[count].DayOfWeek);
		getchar();

		printf("���ǹ�ȣ : ");
		scanf("%s", info[count].RoomNum);
		getchar();

		printf("���� �ð�:(ex.HH:MM-HH:MM) ");
		scanf("%s", info[count].Time);
		getchar();

		BuildingSave(info, count);

		printf("===========================\n");
		count++;
		break;
	}

	return;
}