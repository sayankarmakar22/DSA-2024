#include <bits/stdc++.h>
using namespace std; 

class Rectangle{
public:
    int l;
    int b;
    Rectangle(){ // default contructor
        l=0;
        b=0;
    }
    Rectangle(int x,int y){ //parametrized constructor
        l=x;
        b=y;
    }
    Rectangle(Rectangle &r){ //copy contructor
        l=r.l;
        b=r.b;
    }
    ~Rectangle(){
        cout << "Destructor is called" <<endl;
    }
};

int main(){
    Rectangle *r1 = new Rectangle();
    cout << r1->l <<"  " << r1->b << endl;
    // what if we want to destroy the life cycle of an object manually 
    delete r1;
    Rectangle r2(10,20);
    cout << r2.l <<"  " << r2.b << endl;
    Rectangle r3 = r2;
    cout << r3.l <<"  " << r3.b << endl;

    return 0;
}
