#include <bits/stdc++.h>
using namespace std; 

class Fruit{
    public:
    string name;
    string color;
    int price;
};

int main(){
    // making an object
    Fruit apple;
    // setting the values to that object
    apple.color = "red";
    apple.name = "apple";
    apple.price = 100;
    //printing the values
    cout << apple.color <<" " << apple.name <<" " << apple.price << endl;

    // making an object using * and new keyword
    Fruit *mango = new Fruit();

    mango->color = "yellow";
    mango->name = "mango";
    mango->price = 100;
    //printing the values
    cout << mango->color <<" " << mango->name <<" " << mango->price << endl;
    

    return 0;
}
