#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main()
{
    ll q;cin>>q;
    while (q--)
    {
        ll len,g,b ;cin>>len>>g>>b;
        cout<<(len+1)/2+max(len-(len+1)/2,(len-1)/(2*g)*b)<<"\n";        
    }
    
}