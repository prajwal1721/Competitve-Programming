#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}
    int dp[n+1]={0};
    for(int i=0;i<n;i++)dp[i]=INT32_MAX;
    dp[0]=0;
    int mn=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=arr[i];j++)
        {
            if(i+j<n && i+j>=mn)
            {
                dp[i+j]=min(dp[i+j],dp[i]+1);
                mn=max(mn,i+j);
            }
        }
    }
    dp[n-1]=(dp[n-1]<=0 || dp[n-1]>n)?-1:dp[n-1];
    cout<<dp[n-1]<<'\n';
}