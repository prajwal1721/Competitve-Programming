// https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/little-monk-and-his-toy-story/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  ans=0,f,n,t;cin>>n;int pre=1000000000,cnt=0;
    while (n--)
    {
        cin>>t;
        if(pre>t) {f=1;pre=t;cnt++;}
        else {ans=cnt;cnt=1;pre=t;f=0;}
    }
    if(f)ans=cnt;
    cout<<ans<<"\n";
}