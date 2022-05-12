#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int cmp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
int main(){
    int arr[20];
    srand((unsigned)time(NULL));
    for(int i=0;i<10;i++){
        arr[i]=rand()%100;
    }
    qsort(arr,10,sizeof(arr[0]),cmp);
    return 0;
}