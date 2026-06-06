#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];
    int maxProfitValue = 0;

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int profit = prices[i] - minPrice;
            if (profit > maxProfitValue) {
                maxProfitValue = profit;
            }
        }
    }

    return maxProfitValue;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit: " << maxProfit(prices);

    return 0;
}