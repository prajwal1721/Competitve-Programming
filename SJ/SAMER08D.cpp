
//pending 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(string a,string b,ll n)
{
	ll no1=a.length(),no2=b.length();
	ll memo[no2+1][no1+1]={0},i=0,j=0;
		ll ans=0;
	for(i=0;i<no1;i++)memo[i][0]=0;
	for(i=0;i<no2;i++)memo[0][i]=0;
	for(i=1;i<=;i++)
		{for(j=n;j<=no1;j++)
			{	
				if(a[j-1]!=b[i-1]){memo[i][j]=max(memo[i-1][j],memo[i][j-1]);}
				else if(a[j-1]==b[i-1]){memo[i][j]=memo[i-1][j-1]+1;}
			}
		}
	for(i=n;i<=no2;i++)
	{
		for(j=n;j<=no1;j++)
		{
			if(memo[i][j]-memo[n][n]>ans)ans=memo[i][j]-memo[n][n];
		}
	}
	cout<<ans<<"\n";
}
int main()
{
	ll n;cin>>n;
	string a,b;cin>>a>>b;
	solve(a,b,n);
}

