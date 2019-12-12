#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    
    long long k,n,a[400000];
    cin>>n>>k;
    ios::sync_with_stdio(0);
    cin.tie(0);
    string aq;
    for(int i=0;i<n;i++)
    {
        cin>>aq;
        a[i]=aq.length();
    }
    long long c=0;
    for(int p=0;p<n;p++)
    for(int i=p+1;i<k+p+1;i++)
        {
            if(a[p]==a[i])
                c++;
        }
    cout<<c;
}