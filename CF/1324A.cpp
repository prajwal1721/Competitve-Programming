    #include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
            cin.tie(nullptr);
            ios::sync_with_stdio(false);
        ll q;cin>>q;
        while (q--)
        {
            ll n,i=0;
            cin>>n;
            int a[n];
            int m=INT32_MAX;
            while (i<n)
            {   
                cin>>a[i];
                if(m>a[i])m=a[i];i++;
            }
            int f=0;
            for(int i=0;i<n;i++)
            {
                a[i]-=m;
                if(a[i]%2){f=1;break;}
            }
            if(f)cout<<"NO\n";
            else cout<<"YES\n";
        }

            
            
}
