// link:
// [prajwal1721]
// g++ -Wall -Wextra -Wshadow filename.cpp
/*comments:
*/



#include<bits/stdc++.h>
using namespace std; 
#define mod 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define bits(x) __builtin_popcountll(x)


typedef long long int ll;

int main()
{
    int n, x, y;
    scanf("%d%d%d", &n, &x, &y);
    int arr[n];
    for(int i = 0 ; i < n ; ++i) {
        scanf("%d", &arr[i]);
    }
 
    for(int i = 0 ; i < n ; ++i) {
        bool isGood = true;
        for(int j = max(0, i - x) ; j <= min(i + y, n - 1) ; ++j) {
            if(i != j && arr[i] > arr[j]) {
                isGood = false;
            }
        }
        if(isGood) {
            printf("%d\n", i + 1);
            return 0;
        }
    }
    return 0;
}
