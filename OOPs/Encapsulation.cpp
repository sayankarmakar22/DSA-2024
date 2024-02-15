#include <bits/stdc++.h>
using namespace std; 

class temp{
  int a;
  int b;
     public:
     int solve(int input){
        a=input;
        b=a/2;
        return b;
  }
};


int main(){
    temp t1;
    cout << t1.solve(10);

    return 0;
}
