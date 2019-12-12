#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    long long int q;

    char a;
    vector<char> v;
    cin>>q;

    long long int m = q/2;
    while (q--)
    {
        cin>>a;
        v.push_back(a);   
    }
    long long int f_a = count(v.begin(),v.end(),'a');
    long long int f_b = count(v.begin(),v.end(),'b');
   
    long long int count = 0;  
    while (1)
    {
        if(f_a == f_b)
            break;
        else if(f_a > f_b)
        {
            f_a--;
            f_b++; 
            
            count++;
        }
        else
        {
            f_b--;
            f_a++;
            count++;
        }
        
    }
    cout<<count<<endl;
    
    // while ((q/2)--)
    // {
        // cout<<'b';
    // }
    for(long long int i = 0; i != v.size(); i+=2)
    {   if((v[i] == 'a' && v[i+1] == 'b') || (v[i] == 'b' && v[i+1] == 'a')) 
            cout<<v[i]<<v[i+1];
        else
        {
            cout<<"ab";
        }
        
    
    }
    cout<<endl;
    return 0;
}