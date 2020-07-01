#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

const int N=100100;

int n,K;
ll h[N],sum[N],path[N],ans[N];

int main()
{
	cin>>n>>K;
	sum[1]=1; 
	int maxl=1;
	for(int i=1;i<=n;i++)
	{
        
		cin>>h[i];
		sum[i]=1;
		for(int j=max(1,i-600);j<i;j++)
		{
			if(abs(h[j]-h[i])>=K && sum[j]+1>sum[i])
			{
				sum[i]=sum[j]+1;
				path[i]=j;
			}
			if(sum[i]>sum[maxl])
			{
				maxl=i;
			}
		}
	}
	cout<<sum[maxl]<<endl;
	int T=path[maxl];
	int cnt=0;
	ans[cnt]=maxl;
	while(T)
	{
		ans[++cnt]=T;
		T=path[T];
	}
	for(int i=cnt;i>=0;i--){
		cout<<ans[i]<<" ";
	}
    cout<<"\n";
	return 0;
}