#include <bits/stdc++.h>
using namespace std; 

void printPairs(int arr[],int size){
    for(int i = 0;i<size;i++){
        for(int k = 0;k<size;k++){
            cout << "(" << arr[i] << " , " << arr[k] << ")" << endl;
        }

    }
}

int main(){
     int arr[] = {10,20,30,40,50};
    int size = 5;
    printPairs(arr,size);

    return 0;
}
