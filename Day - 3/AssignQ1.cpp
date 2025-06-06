#include<iostream>
using namespace std;

bool containsDuplicate(int *arr,int n){
    int flag = false;

    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n;j++){
            if(arr[i]==arr[j]){
                flag = true;
                break;
            }
        }
    }

    return flag;
}

int main(){
    int arr[] = {1,2,3,5};
    int size = sizeof(arr)/sizeof(int);

    bool status = containsDuplicate(arr,size);

    cout<<"The Give array contains the duplicate element: "<<status<<endl;

    return 0;
}