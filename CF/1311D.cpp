#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> fact(vector<int>a,int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0){
            a.push_back(i);
            if(n/i!=i)a.push_back(n/i);
        }
    }
}
int main()
{
    int q;cin>>q;
    while (q--)
    {
        int ca,cb,cc;cin>>ca>>cb>>cc;
        vector<int>b,c;
        a=fact(a,ca)b=fact(b,cb);c=fact(c,cc);
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        sort(a.begin(),a.end());
        int ans=0;
    }
    
}