#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "function.h"

int main() {
	setlocale(LC_ALL, "Rus");
	int A, B, C, numerator_module, sum1;
	float result;

	printf(" ������� ��������\n");
	printf("A = ");
	scanf("%d", &A);
				
				
	printf("������� ��������\n");
	printf("B = ");
	scanf("%d", &B);

			
	printf("������� ��������, different from 0\n");
	printf("C = ");
	scanf("%d", &C);
	if (C == 0) 
	{
		printf("�� ��������� !!!!!!!\n");
		return 0;
	}
	
	sum1 = sum_func(A);
	numerator_module = module(numerator(A,B,C)); 
	float numerator_module_float = (float) numerator_module;
	float cube_float = (float) cube(C);
	float sum_float = (float) sum1;
	result = (numerator_module_float)/(cube_float)*(sum_float);
	printf("Q = %f", result);
	
}

