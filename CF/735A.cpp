#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n,j,i;cin>>n>>j>>s;
    int c=0;
    for(i=0;i<n;i++){
        if(s[i]=='T')c=1;
        if(s[i]=='G')break;
    }
    if(c){
        for(;i>=0;i-=j){
            if(s[i]=='T'){
                cout<<"YES\n";
                return 0;

            }
            else if(s[i]=='#'){
                cout<<"NO\n";
                return 0;
            }
        }
    }
    else{
        for(;i<n;i+=j){
            if(s[i]=='T'){
                cout<<"YES\n";
                return 0;
            }
            else if(s[i]=='#'){
                cout<<"NO\n";
                return 0;
            }

        }
    }
    cout<<"NO\n";
}