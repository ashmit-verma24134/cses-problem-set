#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<long long> coin(n);
    for(int i=0;i<n;i++){
        cin>>coin[i];
    }

    int infi=1e9;
    vector <long long> dp(x+1,infi);

    dp[0]=0;

    for(int i=1;i<=x;i++){
        for(int c : coin){
            if(i-c>=0){
                dp[i]=min(dp[i],dp[i-c]+1);
            }
        }
    }

    if(dp[x]==infi) cout<< -1;
    else cout<<dp[x];
    
}