#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    int n = sizeof(arr[0])/sizeof(int);

    cout<<*arr<<endl;  // arr[0]
    cout<<*(arr+1)<<endl; // arr[1]
    cout<<*(arr+2)<<endl; // arr[2]

    return 0;
}