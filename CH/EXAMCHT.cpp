#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
typedef long long  l;
l countDivisors(l n) ;
using namespace std;
int main()
{
    l q;
    cin>>q;
    while(q--)
    {
        l a,b,i=1,count=0;
        cin>>a>>b;
        l max=abs(a-b);
        a--;b--;
        if(a==b )
        cout<<-1<<"\n";
        else
        cout<<countDivisors(max)<<"\n";
    }
}
l countDivisors(l n) 
{ 
    long cnt = 0; 
    for (l i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
        } 
    } 
    return cnt; 
} 