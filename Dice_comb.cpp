#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    const int mod=1000000007;

    vector<long long> dp(n+1,0);

    dp[0]=1;
    for(int total=1;total<=n;total++){
        for(int last=1;last<=6;last++){
            if(total-last>=0){
                dp[total]=(dp[total]+dp[total-last]) % mod;
            }
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}