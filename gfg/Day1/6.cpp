#include <iostream>
using namespace std;
int arr[51], n, g_sum;
void solve(){
    cin >> n;
        g_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            g_sum += arr[i];        
        }
        int dp[g_sum+1]={0};
        dp[0]=1;
        for(int i=0;i<n;i++){
            for(int j=g_sum;j>=0;j--){
                if(j-arr[i]>=0 && dp[j-arr[i]]){
                    dp[j]=1;
                }
            }
        }
        int mn=g_sum;
        for(int i=0;i<=g_sum/2;i++){
            if(!dp[i])continue;
            if(abs(g_sum-2*i)<mn){
                mn=abs(g_sum-2*i);
            }
        }
        cout<<mn<<'\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();        
    }
}