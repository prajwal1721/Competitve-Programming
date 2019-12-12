import java.util.Arrays; 
class t
{
int[] I(int[]scores,int[]lowerLimits,int[]upperLimits)  
{
    int[] ans=new int[lowerLimits.length]; 
    no=lowerLimits.length;
    n=scores.length;
    Arrays.sort(scores); 
    int i=0;
    for(int j=0;j<n;j++)
           start[i++]=lowerIndex(scores,no,lowerLimits[j]);
    i=0;
        for(int j=0;j<n ;j++)
           end[i++]=upperIndex(scores,no,upperLimits[j]);
for(i=0;i<n;i++)
    ans[i]=end[i]-start[i];
    return ans;
}
 int upperIndex(int arr[], int n, int y) 
{ 
    int l = 0, h = n - 1; 
    while (l <= h)  
    { 
        int mid = (l + h) / 2; 
        if (arr[mid] <= y) 
            l = mid + 1; 
        else
            h = mid - 1; 
    } 
    return h; 
} 
 int lowerIndex(int arr[], int n, int x) 
{ 
    int l = 0, h = n - 1; 
    while (l <= h)  
    { 
        int mid = (l + h) / 2; 
        if (arr[mid] >= x) 
            h = mid - 1; 
        else
            l = mid + 1; 
    } 
    return l; 
} 