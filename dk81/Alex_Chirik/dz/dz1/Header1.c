#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

int **plusm(int **arr, int **arr2,int k,int l)
{
	int **sum;
	sum = (int**)malloc(sizeof(int*)*k);//������ �������
	for (int i = 0; i < k; i++)
	{
		sum[i]= (int*)malloc(sizeof(int)*l);//�����
		for (int j = 0; j < l; j++)
		{
		
			sum[i][j] = arr[i][j] + arr2[i][j];
		}
	}
	return sum;
}