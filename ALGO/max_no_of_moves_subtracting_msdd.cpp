#include<bits/stdc++.h>
using namespace std;
void solve(int n){
    cout<<n<<' ';
    int cnt=0;
    while(n){
        int t=n;
        int r=t%10;
        if(t>=10)
        while(t && t>=10){
            t=t/10;
        }
        if(t==10)
            n--;
           else 
            n-=t;
        // cout<<n<<' ';
        cnt++;
    }
    cout<<cnt<<"\n";
}
int main(){
    int n=500;
    for(int i=0;i<n;i++){
        solve(i);
    }
}