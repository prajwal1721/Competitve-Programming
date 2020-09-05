#include<iostream>
#include<vector>
using namespace std;
int pivotSearch(int st,int ed,vector<int> &v){
    int m=st+(ed-st)/2;
    cout<<m<<' '<<st<<" "<<ed<<'\n';
     if(st>=ed)return 0;
    if(m-1>=st && v[m]<v[m-1])return m;
    if(m+1<=ed && v[m]>v[m+1])return m+1;
    if(v[m]>v[ed])return pivotSearch(m+1,ed,v);
    return pivotSearch(st,m-1,v);
}
int main()
{
    int n,t;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>t;v.push_back(t);
    }
    cout<<v[pivotSearch(0,n-1,v)]<<"\n";
}