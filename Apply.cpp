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

		printf("���̵� : ");
		scanf("%s", saved[*count].ID);

		printf("��й�ȣ : ");
		scanf("%s", saved[*count].PW);


		while (saved[*count].PW[8] != NULL) {
			printf("��й�ȣ�� 9�ڸ� �̻� �Է����ּ���.\n\n");
			break;
		}

		while (1) {
			printf("��й�ȣ : ");
			scanf("%s", saved[*count].PW);

			printf("��й�ȣ Ȯ�� : ");
			scanf("%s", saved[*count].testPW);

			if (!strcmp(saved[*count].PW, saved[*count].testPW) == 0)
			{
				printf("��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n\n");
				continue;
			}
			else
				break;
		}
		break;
	}
					printf("-ȸ������ ����-\n");
					++*count; //*�� �� �ٿ��� �ϴ±�,, *++�� ++*�� �ٸ�..

					printf("count : %d\n", *count);

}
int main(void) {
	Apply();
	return 0;
}