#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < size - 1; i++){
        int currVal = arr[i];
        for(int j = i + 1; j < size; j++){
            cout << "(" << currVal << " , " << arr[j] << ") "<<endl;
        }
    }

    return 0;
}