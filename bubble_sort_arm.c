#include<stdio.h>
#pragma GCC target ("arm")

void bubble_sort_arm() {
	int indata[32] = { 2, 0, -7, -1, 3, 8, -4, 10, -9, -16, 15, 13, 1, 4, -3, 14, -8, -10, -15, 6, -13, -5, 9, 12, -11, -14, -6, 11, 5, 7, -2, -12 };
	int outdata[32] = {0};

	int i, j , temp;

	for(i = 0 ; i < 31 ; i++)//비교횟수는 데이터갯수-1, 자기 자신과는 비교 하지 않음
	{
	    for(j = 0 ; j < 31 ; j++)
	    {
	        if(indata[j] > indata[j+1])
	        {
	            temp = indata[j];//뒷자리의 수가 더 크면 교체
	            indata[j] = indata[j+1];
	            indata[j+1] = temp;
	        }
	    }
	}

	for(j = 0 ; j < 32 ; j++)
	{
		outdata[j] = indata[j];
    }
}
