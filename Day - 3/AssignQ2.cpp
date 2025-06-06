#include<iostream>
using namespace std;

// Search In Rotated Sorted Array:

int search(int *arr,int n,int target){
    int low = 0,high = n-1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[mid] == target){
            return mid;
        }

        // Check if left half is sorted or not

        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<=arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        else{
            if(arr[mid]<=target && target<=arr[high]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
}

int main(){
    int target = 0;
    int arr[] = {4,5,6,7,0,1,2};
    int size = sizeof(arr)/sizeof(int);

    int result = search(arr,size,target);

    cout<<"Search Position: "<<result<<endl;

    return 0;
}