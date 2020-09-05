#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,t,target;cin>>n>>target;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;v.push_back(t);
    }
    int st=0,ed=n-1,ans=-1;
    while (st<=ed)
    {
        int m=st+(ed-st)/2;
        if(v[m]<=target){
            ans=m;
            st=m+1;
        }
        else ed=m-1;
    }
    if(ans!=-1)
        cout<<v[ans]<<'\n';
    else 
        cout<<ans<<'\n';
    return 0;
}