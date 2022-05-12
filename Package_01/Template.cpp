#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

template<typename T>
void swap_01(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void sort(T arr[],int len) {
    for(int i=0; i<len; i++){
        int max=i;
        for(int j=i+1; j<len; j++){
            if(arr[max]<arr[j])
                max=j;
        }
        if(max!=i)
            swap_01(arr[max],arr[i]);
    }
}

template<typename T>
void print(T arr[],int len){    
    for(int i=0; i<len; i++)
        cout<<arr[i]<<" ";
}

int main(){
    char buf[]="asdfghjkl";
    int arr[]={};
    int len =sizeof(buf)/sizeof(char);
    sort(buf,len);
    print(buf,len);
    cout<<endl;
    srand((unsigned)time(NULL));
    for(int i=0;i<10;i++)
        arr[i]=rand()%100;
    sort(arr,10);
    print(arr,10);
    return 0;
}
