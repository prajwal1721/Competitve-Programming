#include<iostream>
#include<string>
using namespace std;
int main()
{
    typedef long long ll;
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ca=0,cd=0;

    for(ll i=0;i<s.length();i++)
    {
        if(s[i]=='A') ca++;
        else if(s[i]=='D') cd++;
    }
        // cout<<ca<<" "<<cd<<"\n";
    if(ca>cd)
        cout<<"Anton\n";
    else if(cd==ca)
        cout<<"Friendship\n";
    else
    {
        cout<<"Danik\n";
    /* code */
    }
}
