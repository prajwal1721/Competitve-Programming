#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    string s1,s2;cin>>s1>>s2>>n;
    ll mx=max(s1.length(),s2.length()),
        mn=min(s1.length(),s2.length());
    string A=s1,B=s2;
    if(A.length()==1){
        int ans=B.length()*n;
        for(int i=0;i<B.length();i++)if(B[i]==A[0])ans-=n;
        cout<<ans<<'\n';
        return 0;
    }
    if(B.length()==1){
        int ans=A.length()*n;
        for(int i=0;i<A.length();i++)if(A[i]==B[0])ans-=n;
        cout<<ans<<'\n';
        return 0;
    }

    if(!A.length() || !B.length()){cout<<max(A.length(),B.length())*n;return 0;}
    ll dp[A.length()+5][B.length()+5];
    for(int i=1;i<=A.length();i++)dp[i][0]=i*n;
    for(int i=1;i<=B.length();i++)dp[0][i]=i*n;
    // dp[1][1]=min(abs(A[0]-B[0]),2*n);
    for(int i=1;i<=A.length();i++){
        for(int j=1;j<=B.length();j++){
            dp[i][j]=min(dp[i-1][j],dp[i][j-1])+n;
            dp[i][j]=min(dp[i][j],dp[i-1][j-1]+abs(A[i-1]-B[j-1]));
        }
    }
    /*
    for(int i=0;i<=A.length();i++){
        for(int j=0;j<=B.length();j++)
            cout<<dp[i][j]<<"\t";
        cout<<'\n';
    }*/
    cout<<(dp[A.length()][B.length()])<<'\n';
}