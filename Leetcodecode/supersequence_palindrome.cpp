#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    string t(s.rbegin(),s.rend());
    int n=s.length();
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            dp[i][j]=0;
            if(i==0 || j==0)continue;
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            if(s[i-1]==t[j-1]){
                dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
            }
        }
    }
    string lcs="";
    int j=n,i=n;
    while(i && j){
        if(s[i-1]==t[j-1]){
            lcs=s[i-1]+lcs;
            i--;j--;
        }
        else {
            if(dp[i][j-1]>dp[i-1][j])j--;
            else i--;
        }
    }
    cout<<lcs<<'\n';
    i=0;
    int palin=1;
    for(j=0;j<lcs.length()/2;j++){if(lcs[j]==lcs[lcs.length()-1-j])palin=0;}
    string ans(2*n,'-');
    i=0;j=n-1;
    int st=0,ed=2*n-1,k=0;
    int k_end=lcs.length();
    if(palin){
        k_end=lcs.length()/2;
        if(lcs.length()%2)k_end++;
    }
    while(i<=j){
        //cout<<i<<" "<<j<<"\n";
        if(k==k_end || i>j){cout<<"done\n";break;}
        if(s[i]==lcs[k] && s[j]==lcs[k]){
            ans[st]=s[i];
            if(i!=j){ans[ed]=s[j];ed--;}
            st++;i++;
            j--;
            k++;
        }
        else if(s[i]!=lcs[k]){ans[st]=s[i];ans[ed]=s[i];i++;st++;ed--;}
        else if(s[j]!=lcs[k]){ans[ed]=s[j];ans[st]=s[j];j--;ed--;st++;}
        cout<<i<<" "<<j<<"\n";
        cout<<ans<<"\n";
    }
    cout<<ans<<"\n";
    string p="";
    for(i=0;i<2*n;i++)
        if(ans[i]>='a' && ans[i]<='z')p+=ans[i];
    cout<<p<<"\n";

}