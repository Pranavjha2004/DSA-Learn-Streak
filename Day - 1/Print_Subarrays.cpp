#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int start = 0; start < size; start++){
        for(int end = start; end < size; end++){
            // cout << "(" << i << " , " << j << ") ";
            for(int i = start; i<=end; i++){
                cout<<arr[i];
            }
            cout<<" , ";
        }
        cout<<endl;
    }

    return 0;
}