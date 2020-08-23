#include<stdio.h>
#include <stdlib.h> 
#include <time.h> 

void printEx(int, int, int);

int main()
{
    srand(time(0));
    printEx(0, 10, 4);
	return 0;
}

void printEx(int lower, int upper, int count)
{
    int i;
    for (i = 0; i < count; i++) {
        int num = (rand() %
            (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
}