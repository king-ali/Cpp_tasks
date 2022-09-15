#include <iostream>
using namespace std;

int maxProfit(int arr[], int len){
    int profit = 0;
    int buy = arr[0];
    for(int i=0;i<len;i++){

        if(buy>arr[i]){
            buy=arr[i];
        }
        else if(arr[i]-buy > profit){
            profit = arr[i]-buy;
        }
    }
    return profit;
}

int main(){

    int prices[] = {7,1,5,3,6,4};
    int len = sizeof(prices)/sizeof(prices[0]);
    int profit = maxProfit(prices, len);
    cout<<profit<<endl;

}