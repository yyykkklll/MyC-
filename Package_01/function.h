#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void InitData(int arr[], int len);
void InitData(int arr[], int len)
{
    srand((unsigned)time(NULL));
    for (int i = 0; i < len; i++){
        arr[i] = rand() % 100;
    }
}