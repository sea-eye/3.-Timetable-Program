#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"

void BuildingSave(TimeTable info[N], int ok) {  
	
	//test :: strcpy(info[0].RoomNum, "21302");
	//info[ok].UnivBuilding�� ����
	//�ߺ����� ����Ǹ� �ƿ� ����� �� �Ǵ� ����
	//Ž���� �Ἥ �ߺ��� �����ϸ� ���..

	int Building[N]; 
	char SSU[N][10] = { "" };
	int i, j;
	static int count = 0;

	char b_num[2];

	for (i = count; i < N; i++) {
		for (j = 0; j < 2; j++)
		{
			b_num[j] = info[ok].RoomNum[j];
		}
		
		Building[i] = atoi(b_num);
		
		printf("��ȣ %d�� �ǹ� �̸� �Է� : ", Building[i]);
		scanf("%s", SSU[i]);
		break;
	}

	count++;
	strcpy(info[ok].UnivBuilding, SSU[ok]);

}
