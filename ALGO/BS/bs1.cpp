#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target,t,n;cin>>n>>target;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;v.push_back(t);
    }
    int st=0,ed=n-1;
    while (st<=ed)
    {
        int m=st+(ed-st)/2;
        if(v[m]==target){cout<<m<<"\n";return 0;}
        if(v[m]>target)ed=m-1;
        else st=m+1;
    }
    cout<<-1<<'\n';
    return 0;
}