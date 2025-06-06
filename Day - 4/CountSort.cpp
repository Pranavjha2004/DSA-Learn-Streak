#include<iostream>
#include<climits>
using namespace std;

void countSort(int *arr, int n){
    int freq[100000]; //range
    int minVal = INT_MAX, maxVal = INT_MIN;


    //1st Step:
    for(int i = 0; i<n; i++){
        freq[arr[i]]++;
        minVal = min(minVal,arr[i]);
        maxVal = max(maxVal,arr[i]);
    }

    //2nd Step:
    for(int i = minVal, j = 0; i<=maxVal; i++){
        while(freq[i]>0){
            arr[j++] = i;
            freq[i]--;
        }
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {5,4,7,3,1};

    int size = sizeof(arr)/sizeof(int);

    countSort(arr,size);

    return 0;
}