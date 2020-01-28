#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> s;
    s.push_back(1);
    s.push_back(4);
    s.push_back(2);
    for(auto a=s.begin();a<=s.end();a++)
        cout<<*a<<" ";
}