#include<iostream>
#include<vector>
#include <bits/stdc++.h> 
#include<iterator>
public vector <int>funct (vector<int> scores,vector<int>lowerLimit,vector<int>upperLimit)
{
    int n=lowerLimits.size(),no=scores.size();
    vector<int >ans(n,0);
    vector<int >end(n,0);
    vector<int >start(n,0);

    sort(scores.begin(), scores.end()); 
        int i=0;
        for(int j=0;j<n;j++)
               start[i++]=lowerIndex(scores,no,lowerLimits[j])
        i=0;
            for(int j=0;j<n ;j++)
               end[i++]=upperIndex(scores,no,upperLimits[j])
  for(int i=0;i<n;i++)
        ans[i]=end[i]-start[i];
    return ans;
}   

int lowerIndex(vector<int>arr, int n, int x) 
{ 
    int l = 0, h = n - 1; 
    while (l <= h) { 
        int mid = (l + h) / 2; 
        if (arr[mid] >= x) 
            h = mid - 1; 
        else
            l = mid + 1; 
    } 
    return l; 
} 
  

int upperIndex(vector<int>arr, int n, int y) 
{ 
    int l = 0, h = n - 1; 
    while (l <= h) { 
        int mid = (l + h) / 2; 
        if (arr[mid] <= y) 
            l = mid + 1; 
        else
            h = mid - 1; 
    } 
    return h; 
} 