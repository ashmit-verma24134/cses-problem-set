#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,x;
    cin>>n>>x;
    int mod = 1000000007;
    vector<long long> coins(n);
    for(int i=0;i<n;i++){
        cin>>coins[i];
    }

    vector<long long> dp(x+1,0);
    dp[0]=1;
    for(long long coin : coins){
        for(int sum=coin;sum<=x;sum++){
            dp[sum]=(dp[sum]+dp[sum-coin]) % mod;
        }
    }

    cout<<dp[x];
}