#include<iostream>
#include<climits>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int maxVal = INT_MIN;
    int currVal = 0;
    for(int start = 0; start<n; start++){
        for(int end = start; end<n; end++){
            currVal = 0;
            for(int i = start; i<=end; i++){
                currVal += arr[i];
            }
            cout<<currVal<<", ";
            maxVal = max(currVal,maxVal);
        }
        cout<<endl;
    }
    cout<<"Maximum Subarray Sum: "<<maxVal<<endl;
}


int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int size = sizeof(arr)/sizeof(int);

    maxSubarraySum(arr,size);

    return 0;
}