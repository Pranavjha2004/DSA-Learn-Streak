#include<iostream>
#include<climits>
using namespace std;

// Modified Kadanes Algorithm for calc Max Subarray Product:


void maxProductSubarray(int *arr, int n){
    int maxVal = INT_MIN;
    int currVal = 1;

    for(int i = 0; i<n; i++){
        currVal *= arr[i];
        maxVal = max(maxVal,currVal);

        if(currVal<0){
            currVal = 1;
        }
    }

    cout<<"Maximum Subarray Product is: "<<maxVal<<endl;
}

int main(){
    int arr[] = {-2,0,-1};
    int size = sizeof(arr)/sizeof(int);

    maxProductSubarray(arr,size);

    return 0;
}