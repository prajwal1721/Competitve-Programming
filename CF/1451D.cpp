// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
// ./a.out >input <output
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b))
#define bits(x) __builtin_popcountll(x)
#define vi              vector<int>
#define vl              vector<ll>
#define all(v)          v.begin(),v.end()
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())



typedef long long int ll;
void solve()
{
    ll n,t,d;
    cin>>d>>n;
    int x=0,y=0,c=0;
    int x1=(d-n)%n+n;
    int y1=d%n;
    while(x*x+y*y<d*d){
        if(x<=y && (y+n)*(y+n)+x*x<=d*d){
            c++;
            y+=n;
        }
        else if((y)*(y)+(x+n)*(x+n)<=d*d){
            c++;
            x+=n;
        }
        else {
            break;
        }
    }
    if(c==0){
        cout<<"Utkarsh\n";
        return;
    }
    c--;
    if(c%2){
        cout<<"Ashish\n";
    }
    else {
        cout<<"Utkarsh\n";
    }

}


int main()
{ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;cin>>t;
    // cout<<t<<"Hi test complete\n";
    while(t--)
        {
            solve();
        }


    return 0;
}