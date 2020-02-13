#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
int main()
{
    ll q,tot=0;cin>>q;
    while(q--)
    {
        int a[4][4]={0};
        ll n;cin>>n;
        while(n--)
        {
            char ch;ll t;cin>>ch>>t;
            a[ch-'A'][t/3-1]++;   
        }
        n=4;
        int cur[4]={100,75,50,25};
        int temp[4]={0};long m=-400;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                    for(int k=0;k<n;k++)
                            for(int r=0;r<n;r++)
                            {
                                if(r!=i && r!=k && r!=j&& k!=j && k!=i&&j!=i)
                                {
                                    int sum=0,now=0;
                                    temp[0]=a[0][i];
                                    temp[3]=a[3][r];
                                    temp[1]=a[1][j];
                                    temp[2]=a[2][k];
                                    sort(temp,temp+n,greater<int>());
                                    // cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<" "<<temp[3]<<"\n";
                                    for(int y=0;y<n;y++)
                                    {
                                        if(!temp[y])now++;
                                        sum+=temp[y]*cur[y];
                                    }   
                                    sum-=now*100;
                                    if(m<sum)m=sum;
                                }
                            }
        cout<<m<<"\n";
    tot+=m;
    }
    std::cout<<tot<<"\n";
}
