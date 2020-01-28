#include<iostream>
using namespace std;
int main()
{
    char  a[8][8];
    int q;
    cin>>q;
    while(q--)
    {
        int n,b_x,b_y,k_x,k_y;
        cin>>n;
        for (int i = 0; i <8; i++)
        for (int j = 0; j <8; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='K')k_x=i;k_y=j;
            if(a[i][j]=='B')b_x=i;b_y=j;
        }
        if(k_x%2!=b_x%2 || b_y%2!=k_y%2)
        {   cout<<"NO\n";continue;}
        
    }
}