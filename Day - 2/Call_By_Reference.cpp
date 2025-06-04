#include<iostream>
using namespace std;

// 1st method using a Pointer
/*
void changeA(int *ptr){
    *ptr = 32;
}

int main(){

    int a = 10;
    cout<< a<<endl;

    changeA(&a);

    cout<<a<<endl;
}
*/

// 2nd method using reference variables

void changeB(int &val){
    val = 20;
}

int main(){
    int a = 5;

    int &b = a;  // Used as reference variables not as address of operator

    changeB(a);
    cout<<a<<endl;

    return 0;
}