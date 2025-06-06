#include<iostream>
#include<climits>
using namespace std;

int MaxSubarraySum(int *arr, int n){
    int max_Val = INT_MIN;

    for(int start = 0; start<n; start++){
        int currVal = 0;
        for(int end = start; end<n; end++){
            currVal +=arr[end];
            max_Val = max(currVal,max_Val);
            cout<<currVal<<", ";
        }
        cout<<endl;
    }
    cout<<"Max subarray sum: "<<max_Val<<endl;
}

int main(){
    int arr[6] = {2,-3,6,-5,4,2};

    int size = sizeof(arr)/sizeof(int);

    MaxSubarraySum(arr,size);

    return 0;
}