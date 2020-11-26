#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;cin>>s;
    int cnt=0,i;
    for(i=s.length()-1;i>=0;i--){
        if(s[i]=='0')cnt++;
        if(cnt==6)break;
    }
    if(cnt==6)
    while(i>=0){
        if(s[i]=='1')
            {
                cout<<"yes\n";
                return 0 ;
            }
        i--;
    }
    cout<<"no\n";
}