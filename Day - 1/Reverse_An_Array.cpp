#include<iostream>
#include<array>
using namespace std;

void swap(int &num1, int &num2){  // Pass by reference
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(){
    int arr[] = {1,2,3,4,5};

    int size = sizeof(arr) / sizeof(arr[0]);

    int top = 0;
    int end = size-1;

    while(top<end){
        swap(arr[top],arr[end]);
        top++;
        end--;
    }

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}