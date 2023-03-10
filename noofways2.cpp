#include <iostream>
using namespace std;

int countWays(int n) {
    int dp[n+1];
    dp[0] = 1; // There is only one way to form 0.
    for(int i=1; i<=n; i++) {
        dp[i] = 0;
        if(i>=1) dp[i] += dp[i-1];
        if(i>=3) dp[i] += dp[i-3];
        if(i>=5) dp[i] += dp[i-5];
    }
    return dp[n];
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    cout << "Total number of ways to form " << n << " using {1, 3, 5} is " << countWays(n) << endl;
    return 0;
}
