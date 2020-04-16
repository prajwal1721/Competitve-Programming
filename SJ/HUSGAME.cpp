#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll q;cin>>q;

    // cout<<"done\n";
    while (q--)
    {
        ll t;cin>>t;
        if(t%2==0 ||t==1){cout<<"HuseyNO"<<"\n";}
        else
        {
                int count=0;
    			while(t%2==1){
    				t=(t+1)/2;
    				count++;
    			}
    			if(count%2){
    				cout<<"ZiYES\n";
    			}
    			else{
    				cout<<"HuseyNO\n";
    			}
        }

    }
}