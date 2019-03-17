#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)
#define N 20
#include "C:\Users\wjdal\source\repos\ciai_timetable0\ciai_timetable0\ciai03.h"
void Apply() {

	NewUser saved[N];

	int zero = 0;
	int* count = &zero;


	while (1) {

		printf("아이디 : ");
		scanf("%s", saved[*count].ID);

		printf("비밀번호 : ");
		scanf("%s", saved[*count].PW);


		while (saved[*count].PW[8] != NULL) {
			printf("비밀번호는 9자리 이상 입력해주세요.\n\n");
			break;
		}

		while (1) {
			printf("비밀번호 : ");
			scanf("%s", saved[*count].PW);

			printf("비밀번호 확인 : ");
			scanf("%s", saved[*count].testPW);

			if (!strcmp(saved[*count].PW, saved[*count].testPW) == 0)
			{
				printf("비밀번호가 일치하지 않습니다.\n\n");
				continue;
			}
			else
				break;
		}
		break;
	}
					printf("-회원가입 성공-\n");
					++*count; //*을 꼭 붙여야 하는군,, *++과 ++*은 다름..

					printf("count : %d\n", *count);

}
int main(void) {
	Apply();
	return 0;
}
