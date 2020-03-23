    #include<bits/stdc++.h>
    using namespace std;
    #define mod 1000000007
    int main()
    {
        int q;cin>>q;
        while (q--)
        {
            int n;cin>>n;
            long long ans=1;
            int i=1,t,pre;cin>>pre;
            while (i<n)
            {
                int cur=0;
                cin>>t;int r1,r2,ct=t;
                if((t|pre) !=t){ans=0;}
                while (ct)
                {
                    r1=ct%2;r2=pre%2;ct/=2;pre/=2;
                    if(r1==1 && r2==1)cur++;
                }
                while(cur--)
                ans=(ans*2)%mod;
                pre=t;
                i++;
            }
            cout<<ans%mod<<"\n";
        }
        
    }