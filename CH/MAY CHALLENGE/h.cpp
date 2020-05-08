#include<bits/stdc++.h>
//[harsh_27];
//-----------------------------------------------------------------------------------
#define ll              long long int
#define ull             unsigned long long int
#define db              double
#define vi              vector<int>
#define vl              vector<ll>
#define vii             vector<vector<int> >
#define vll             vector<vector<ll> >
#define all(v)          v.begin(),v.end()
#define vRev(a)         reverse(a.begin(),a.end())
#define vMin(a)         *min_element(a.begin(),a.end())
#define vMax(a)         *max_element(a.begin(),a.end())
#define vSum(a)         accumulate(a.begin(),a.end(),0)
#define sort(a)         sort(a.begin(),a.end())
#define UNIQUE(X)       (X).erase(unique(all(X)),(X).end())
#define SORT_UNIQUE(c)  (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define pb              push_back
#define pf              printf
#define sc              scanf
#define scin(x)         scanf("%d",&(x))
#define scln(x)         scanf("%lld",&(x))
#define scs(s)          scanf("%s" , (s) )
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define mp              make_pair
#define mset(a,b)       memset(a,b,sizeof(a))
#define low_case(st)    transform(st.begin() , st.end() , st.begin(),::tolower )
#define upp_case(st)    transform(st.begin() , st.end() , st.begin(),::toupper )
#define gcd(a, b)       __gcd(a , b)
#define lcm(a,b)        (a*(b/__gcd(a,b)))
#define yes             printf("YES\n")
#define no              printf("NO\n")
#define nl              printf("\n")
 
 
//--------------------   Constant  --------------------------------------------------
#define intMX           2147483648
#define longMX          9223372036854775808
#define inf             (1<<28)
#define eps             1e-9
#define MOD             1000000007
#define PI              2*acos(0.0)
 
//-------------------------------------------------------------------------------------
#define f(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)
 
//-------------------------------------------------------------------------------------
using namespace std;
 
/*  toint, tostring, BigMod, power , Sieve, Primefactorize ,frequency in n!  , BinarySearch , Totient   */
//ll toint(string s){ll n=0,k=1;for(int i=s.size()-1; i>=0; i--){n += ((s[i]-'0')k);k=10;}return n;}
//string tostring(ll x){string s="";while(x){s += (x%10)+'0';x/=10;}reverse(s.begin(),s.end());return s;}
//ll BigMod(ll a,ll b){if(b == 0)return 1%MOD;else if(b%2 == 0){ll temp=BigMod(a,b/2);return ((temp%MOD)*(temp%MOD))%MOD;}else{return ((a%MOD)*BigMod(a,b-1)%MOD)%MOD;}}
/*ll power(ll x, ll y, ll p) 
{ 
    ll res = 1;  
    x = x % p;  
  
    while (y > 0) { 
        if (y & 1) 
            res = (res * x) % p; 
        y = y >> 1; 
        x = (x * x) % p; 
    } 
    return res; 
}
*/
//vector<ll>Prime;
//bool mark[10000003];
/*void sieve(int n)
{
    for(int i=0;i<=10000002;i++)
    {
        arr[i]=1;
    }
    arr[0]=0;arr[1]=0;
    for(int i=2;i<=sqrt(10000002);i++)
    {
        if(arr[i]==1)
        {
            for(int j=2;j*i<=10000002;j++)
            {
                arr[i*j]=0;
            }
        }
    }
    for(int i=0;i<=n;i++)
   {
       if(arr[i]==1)cout<<i<<" ";
   }
}
*/
//map<ll,ll>Factor;
//void Primefactorize(ll n){for(ll i=0; i<Prime.size() && Prime[i]*Prime[i]<=n; i++){if(n%Prime[i] == 0){while(n%Prime[i] == 0){Factor[Prime[i]]++;n/=Prime[i];}}}if(n>1){Factor[n]++;}}
//ll frequency(ll n,ll factor)/* Frequency of a factor in n! */{ll cnt=0;while(n){cnt += (n/factor);n /= factor;}return cnt;}
//ll bin(ll ara[], ll n, ll k){ll l=0,h=n-1,mid,ans=0;while(l<=h){mid=(l+h)/2;if(ara[mid]>=k){h=mid-1;ans=mid;}else l=mid+1; }return ans;}
/*void computeTotient(int n){ll phi[n+5];for (int i=1; i<=n; i++)phi[i] = i;for (int p=2; p<=n; p++)
{if (phi[p] == p){phi[p] = p-1;for (int i = 2*p; i<=n; i += p){phi[i] = (phi[i]/p) * (p-1);}}}}*/
//bool cmp(int a, int b){return a > b;}
bool issorted(ll arr[],ll n)
{
    for(ll i=0;i<n;i++)
    {
        if(arr[i]!=i+1)return false;
    }
    return true;
}
void solve()
{
    ll n,k;cin>>n>>k;
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];
    bool vis[n+1]={false};
    vector<pair<ll,ll>>v;
    vector<pair<pair<ll,ll>,ll>>res;
    for(ll i=0;i<n;i++)
    {
        ll x,y,z;
        if(arr[i]!=i+1)
        {
            x=i;
            y=arr[i]-1;
            int flag=0;
            if(arr[arr[i]-1]!=x+1)
            {
                z=arr[arr[i]-1]-1;
                res.pb(mp(mp(x+1,y+1),z+1));
                ll temp=arr[z];
                arr[z]=arr[y];
                arr[y]=arr[x];
                arr[x]=temp;
                flag=1;
            }
            else
            {
                if(vis[x]==false && vis[y]==false)
                v.pb(mp(x+1,y+1));
                vis[x]=true;
                vis[y]=true;
            }
            if(flag==1)
            {
               if(arr[i]!=i+1)i--; 
            }
           // cout<<x<<" "<<y<<" "<<z<<endl;
        }
    }
    if(v.size()%2!=0)cout<<"-1"<<"\n";
    else
    {
        ll i=0,j=0;
        for(i=0,j=1;i<v.size() && j<v.size();)
        {
            res.pb(mp(mp(v[j].first,v[i].second),v[i].first));
            res.pb(mp(mp(v[j].second,v[j].first),v[i].second));
            i+=2;j+=2;
        }
        if(res.size()>k)cout<<"-1"<<"\n";
        else{
        cout<<res.size()<<"\n";
        for(i=0;i<res.size();i++)
        {
            cout<<res[i].first.first<<" "<<res[i].first.second<<" "<<res[i].second<<"\n";
        }
        }
    }
}


int main()
{   
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

	ll t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	

    return 0;
}