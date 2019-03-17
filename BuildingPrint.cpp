#pragma warning (disable:4996)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct TImeTable{
	
	char RoomNum;
	
	char BuildingName;

}TimeTable;




char BuildingPrint(TimeTable info, int ok)
{
	int ok;
	(char*) info[ok];
	int Building; 
	int BuildingName;

	printf("건물번호를 입력하세요: ");
	scanf("%d", &(char*) info[ok].RoomNum);
	Building = atoi((char*)info[ok].RoomNum);

	printf("건물이름을 입력하세요: ");
	scanf("%s", &BuildingName);
	printf("Building==%d\nBuildingName==%s\n", Building, BuildingName );

	
}

int main()
{
	int Building;
	TimeTable info;
	int ok;
	BuildingPrint (info, ok);
	
	switch (Building)//Building:건물번호
				//Case개수가 7개가 최대->모든 정보를 넣는 것에 제한
				//대부분의 학생들의 시간표에 포함된 7개의 건물들로 할당
	{
	case 02:
		printf("경상관\n");
		break;
	case 03:
		printf("문화관\n");
		break;

	case 07:
		printf("백마관\n");
		break;


		 case 11:
			   printf("진리관\n");
			   break;

		   case 12:
			   printf("조만식기념관\n");
			   break;

		   case 20:
			   printf("미래관\n");
			   break;

		   case 21:
			   printf("정보과학관\n");
			   break;

		   default:
			   printf("해당하는 건물이름이 없습니다.");
			   break;
}


	return 0;
}
