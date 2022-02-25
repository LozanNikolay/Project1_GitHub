#include<iostream>
#include<conio.h>
#include<math.h>
#include<algorithm>
#include"SortArr.h"
#include"PrintArr.h"

int main()
{
	srand(time(NULL));
	const int size = 10;
	int Arr[size];
	PrintArr(Arr, 10, 1);
	return 0;
	SortArr(Arr, 10, 1);
	
	return 0;
}


