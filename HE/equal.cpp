//https://www.hackerearth.com/challenges/competitive/january-circuits-20/algorithm/equal-subarrays-cf01a26a/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
        ll n,t,k;
        cin>>n>>k;
        vector<ll> v;
        while(n--)
        {
            cin>>t;v.push_back(t);
        }
         ll max=0,count=0,sum=0;
            auto p=v.begin();
        for(auto a=v.begin();a!=v.end();a++)
        {
            if(count>0)
                count--;
            while(sum+*p<k && p!=v.end())
            {
                sum+=*p;count++;p++;
            }
            sum-=*a;
            if(count>max)max=count;
            cout<<count<<"\n";
        }
        // cout<<max<<"\n";
}