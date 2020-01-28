#include<iostream>
#include<vector>
using namespace std;
int main()
{
    typedef long long ll;
    ll  q;
    cin>>q;
    while(q--)
    {
        ll N,A,B,t,C,D,P,Q,Y;
        cin>>N>>A>>B>>C>>D>>P>>Q>>Y;
        vector<ll> v;
        while(N--)
            {
                cin>>t;v.push_back(t);
            }
        ll time_walk=abs(v[A-1]-v[B-1])*P;
        ll time_train=abs(v[C-1]-v[A-1])*P;
        if(time_train<=Y)
        {
            time_train=Y+abs(v[D-1]-v[C-1])*Q+abs(v[D-1]-v[B-1])*P;
        }
        else time_train=-1;
        if(time_train>0)
            cout<<min(time_train,time_walk)<<"\n";
        else 
            cout<<time_walk<<"\n";
    }
}