#include <bits/stdc++.h>
using namespace std; 

void reverseArray(int arr[],int size){
    int left = 0;
    int right = size -1;
     
     while(left < right){
        swap(arr[left++],arr[right--]);
     }
}

int main(){
    int arr[] = {10,20,30,40,50};
    int size = 5;
    reverseArray(arr,size);
    for(int i = 0;i<size;i++){
        cout << arr[i] << " ";
    }


    return 0;
}
