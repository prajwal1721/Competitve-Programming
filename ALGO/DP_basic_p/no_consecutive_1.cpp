#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll N;cin>>N;
    ll C1=1,C0=1;
    if(N==0){cout<<"0\n";return 0;}
    for(int i=1; i<N; i++)
        {
            int temp = C1;
            C1 = C0;
            C0 = C0 + temp;
        }
    cout<<C0+C1<<"\n";
}