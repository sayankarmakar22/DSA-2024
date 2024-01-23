#include <bits/stdc++.h>
using namespace std; 

void sort1And2(int arr[],int size){
    int one = 0;
    int zero = 0;
    for(int i =0;i<size;i++){
        if(arr[i] == 0 ) zero++;
        else one++;
    }
    int index = 0;
    while(zero--){
        arr[index++] = 0;
    }
    while(one--){
        arr[index++] = 1;
    }
}

int main(){
    int arr[] = {0,0,1,1,0,0,0,1,0};
    int size = 9;
    sort1And2(arr,size);

    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }

    return 0;
}
