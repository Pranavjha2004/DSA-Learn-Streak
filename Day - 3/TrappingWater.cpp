#include<iostream>
using namespace std;

void waterTrap(int *height, int n){
    int waterTrapped = 0;
    int leftMax[20000],rightMax[20000];
    leftMax[0] = height[0];
    rightMax[n-1] = height[n-1];

    for(int i = 1; i<n; i++){
        leftMax[i] = max(leftMax[i-1],height[i-1]);
    }

    for(int j = n-2; j>=0; j--){
        rightMax[j] = max(rightMax[j+1],height[j+1]);
    }

    for(int k = 0; k<n; k++){
        int currWater = min(leftMax[k],rightMax[k])-height[k];

        if(currWater>0){
            waterTrapped += currWater;
        }
    }

    cout<<"Water trapped: "<<waterTrapped<<endl;
}

int main(){
    int height[] = {4,2,0,6,3,2,5};

    int size = sizeof(height)/sizeof(int);

    waterTrap(height,size);

    return 0;
}