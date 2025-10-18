#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>


using namespace std;

int maxProfit (vector<int>& prices) {
    
    int profit=0, smallest=prices[0];

    for(int i=1; i<prices.size(); i++) {
        int currentProfit = prices[i] - smallest;
        if(prices[i] <smallest) {
            smallest = prices[i];
        }
        profit= max(profit, currentProfit);
    }


    return profit;
}


int main() {
    return 0;
}