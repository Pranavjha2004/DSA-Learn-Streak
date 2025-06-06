#include<iostream>
using namespace std;

int maximumProfit(int *prices,int n){
    int mini = prices[0];
    int maxProfit = 0;

    for(int i = 0; i<n; i++){
        int cost = prices[i] - mini;
        maxProfit = max(maxProfit,cost);
        mini = min(mini,prices[i]);
    }
    return maxProfit;
}

int main(){
    int prices[6] = {7,1,5,3,6,4};
    int size = sizeof(prices)/sizeof(int);

    int maxProfit = maximumProfit(prices,size);

    cout<<"Maximum Profit: "<<maxProfit<<endl;

    return 0;
}