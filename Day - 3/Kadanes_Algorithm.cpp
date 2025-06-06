#include<iostream>
#include<climits>
using namespace std;

// Applying Kadanes Algorithm:

void MaxSubarraySum(int *arr,int n){
    int maxVal = INT_MIN;
    int currVal = 0;

    for(int i = 0; i<n; i++){
        currVal += arr[i];
        maxVal = max(maxVal,currVal);

        if(currVal<0){
            currVal = 0;
        }
    }

    cout<<"Maximum Subarray Sum: "<<maxVal<<endl;
}

int main(){
    int arr[6] = {2,-3,6,-5,4,2};

    int size = sizeof(arr)/sizeof(int);

    MaxSubarraySum(arr,size);

    return 0;
}