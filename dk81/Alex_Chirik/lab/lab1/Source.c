#include <stdio.h>
#include <stdlib.h>
#include "mathf.h"
#include <locale.h>

int main()
{
	int a, b, c;
	setlocale(LC_ALL, "rus");
	printf("������� ����� �:");
	scanf_s("%d", &a);
	printf("������� ����� b (b>=0):");
	scanf_s("%d", &b);
	if (b < 0)
		return 0;
	printf("������� ����� c:");
	scanf_s("%d", &c);
	printf("\n%f", sum(drob(a, b, c), ryad(b)));
	system("pause");
	return 0;
}