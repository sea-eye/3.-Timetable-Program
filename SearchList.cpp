#include <stdio.h>
#include <string.h>
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
#pragma warning(disable:4996)

void SearchList() {

	int ListChoice;

	printf("1. 과목명 검색\n");
	printf("2. 과목번호 검색\n");
	printf("3. 교수명 검색\n");
	printf("4. 요일별 검색\n");
	printf("5. 교실번호 검색\n");
	printf("6. 메뉴로 돌아가기\n");

	while (1) {
		printf("번호선택 : \n");
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
			printf("<메뉴>\n");
		else
			printf("잘못 입력했습니다. 다시 입력하세요.\n");
			*/
	}
}
int main(void){
	SearchList();
	return 0;


}