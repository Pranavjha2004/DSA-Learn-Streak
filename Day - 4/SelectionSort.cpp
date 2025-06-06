#include<iostream>
using namespace std;

void selectionSort(int *arr, int n){
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {6,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(int);

    selectionSort(arr,size);

    return 0;
}