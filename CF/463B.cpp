#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,t,ans=0;
    cin>>n;
    while (n--)
    {
        cin>>t;if(t>ans)ans=t;
    }
    cout<<ans<<"\n";
}