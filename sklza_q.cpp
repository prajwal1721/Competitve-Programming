    #include<bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main(){
        ll n,d,t,mx;cin>>n>>d;
        vector<ll> v;
        for(int i=0;i<n;i++){cin>>t;v.push_back(t);}
        ll dp[n+1],back[n+1];
        // intitialization
        for(int i=0;i<=n;i++){dp[i]=1;back[i]=i;}

        // calclulating subsequence with given condition
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(abs(v[i]-v[j])>=d)
                    if(dp[j]<dp[i]+1){
                        // storing the max possible subsequence
                        dp[j]=dp[i]+1; 

                        //backtracking
                        back[j]=i; 
                    }
            }
        }
        mx=0;
        // getting max index
        for(int i=0;i<n;i++)
                if(dp[mx]<dp[i])mx=i;
        vector<int> ans;
        int i=mx;

        // backtracking
        while(i!=0 && back[i]!=i)
        {
            ans.push_back(i+1);
            i=back[i];
        }
        ans.push_back(1);

        // reverse the array
        reverse(ans.begin(),ans.end());

        // printing the size of subsequence and array
        cout<<dp[mx]<<"\n";
        for(auto i:ans){
            cout<<i<<' ';
        }
        cout<<'\n';
    }