#include<iostream>
#include <vector>
using namespace std;
typedef long long ll;
int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll a[3],p[3];cin>>a[0]>>a[1]>>a[2]>>p[0]>>p[1]>>p[2];
        ll ans=3;
        if(a[0]==p[0])ans--;
        if(a[1]==p[1])ans--;
        if(a[2]==p[2])ans--;
        vector<ll> v1,v2;
        for(int i=0;i<3;i++){if(a[i]!=p[i]){v1.push_back(p[i]);v2.push_back(a[i]);}}
        if(v1.size()==2)
        {
            if(v2[0] && v2[1] && v1[0]%v2[0]==0 && v1[1]%v2[1]==0 && v1[0]/v2[0]==v1[1]/v2[1])ans--;
            else if(v2[0]-v1[0] == v2[1]-v1[1])ans--;
        }
        else if(v1.size()==3)
        {
            // cout<<"l";
            if(v1[0]-v2[0]==v1[1]-v2[1] && v1[0]-v2[0]==v1[2]-v2[2])ans=1;
            else if(v2[0] && v2[1] && v2[2] && v1[0]%v2[0]==0 && v1[1]%v2[1]==0 && v1[2]%v2[2]==0 && v1[2]/v2[2]==v1[0]/v2[0] && v1[2]/v2[2]==v1[1]/v2[1])ans=1;
            else if((v2[0] && v2[1] &&  v1[0]%v2[0]==0 && v1[1]%v2[1]==0 && v1[0]/v2[0]==v1[1]/v2[1]))ans--;
            else if((v2[0] && v2[2] &&  v1[0]%v2[0]==0 && v1[2]%v2[2]==0 && v1[0]/v2[0]==v1[2]/v2[2]))ans--;
            else if((v2[1] && v2[2] &&  v1[1]%v2[1]==0 && v1[2]%v2[2]==0 && v1[1]/v2[1]==v1[2]/v2[2]))ans--;
            else if(v2[0]-v1[0]==v2[1]-v1[1] || v2[1]-v1[1]==v2[2]-v1[2] || v2[0]-v1[0]==v2[2]-v1[2])ans--;
        }
    cout<<ans<<"\n";
    }
}
