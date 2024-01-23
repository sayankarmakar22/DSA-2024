#include <bits/stdc++.h>
using namespace std; 

void count(int arr[],int size){
    int oneCount = 0;
    int zeroCount = 0;
    for(int i = 0;i<size;i++){
        if(arr[i] == 0) zeroCount++;
        else oneCount++;
    }
    cout << "One Count : " << oneCount << " Zero Count : " << zeroCount;
}

int main(){
    int arr[] = {1,0,1,0,0,1,0,1,1,0,0};
    int size = 11; 
    count(arr,size);

    return 0;
}
