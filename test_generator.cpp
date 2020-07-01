#include<bits/stdc++.h> 
using namespace std; 
#define RUN 6
#define MAX 1000000000
#define MAXNUM 100000 

int main() 
{ 
    srand(time(NULL)); 
    for (long long int i=1; i<=RUN; i++) 
    { 
        long long int N = 1 + rand() % MAXNUM ;
        long long int d = 1 + rand() % N ;
        printf("%d %d", N,d);
        for (long long int j=1; j<=N; j++) 
            printf("%d ", rand() % MAX); 
        printf("\n"); 
    }
    return(0); 
}