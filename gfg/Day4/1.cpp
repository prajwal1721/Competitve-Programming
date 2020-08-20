#include<iostream>
#include<vector>
// #include<algorithm>
using namespace std;
void solve(){
    string s;cin>>s;
    vector<string>st;
    int n=s.length();
    for(int i=0;i<n;i++){
        string t="";
        for(int j=i;j<n;j++){
            t+=s[j];
            st.push_back(t);
        }
    }
    int mx=0;
    string ans="";
    for(auto i:st){
        int r=i.length();
        // cout<<i<<" ";
        int j=r/2,l=r/2,f=1;
        if(!(r%2))l--;
        while (l>=0)
        {
            if(i[j]!=i[l]){f=0;break;}
            l--;j++;
        }
        if(f && mx<i.length()){mx=i.length();ans=i;}
    }
    // cout<<"\n";
    cout<<ans<<"\n";
    
}
int main(){
    int t;cin>>t;
    while (t--)
    {
        solve();
    }
    
}