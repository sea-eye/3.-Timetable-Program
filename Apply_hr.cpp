#include<stdio.h>
#include<string.h>
#include "C:\Users\tlfzg\Desktop\헤더파일_모음\ciai03.h"
#pragma warning (disable:4996)
int main(void)
{
	NewUser saved[N];
	int count = 0;
	char testPW[N];
	printf("아이디: ");
	scanf("%s", saved[count].ID);
	while (1)
	{
		printf("비밀번호: ");
		scanf("%s", saved[count].PW);
		if (strlen(saved[count].PW) < 9)
		{
			printf("비밀번호는 9자리 이상 입력해주세요\n\n");
		}
		else
		{
			printf("비밀번호 확인: ");
			scanf("%s", testPW);
			if (!strcmp(saved[count].PW, testPW))
			{
				getchar();
				printf("-회원가입 성공-\n");
				count++;
				printf("count 증가확인=%d", count);
				getchar();
				return 0;
				//break;
			}
			else
				printf("비밀번호가 일치하지 않습니다\n\n");
		}
	}
		printf("회원가입 실패\n");
		return -1;
	}
