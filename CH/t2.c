#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int n,x=1,j,k;
		scanf("%d",&n);
		int a[n];
		a[0]=0;a[1]=0;
		for(j=1;j<n-1;j++)
		{
			for(k=j-1;k>=0;k--)
			{
				if(a[k]==a[j])
				{
					a[j+1]=j-k;
					break;
				}
			}
			if(k==-1)
			a[j+1]=0;
		}
		for(j=0;j<n-1;j++)
		{
			if(a[n-1]==a[j])
			x++;
		}
		printf("%d\n",x);
	}

	return 0;
}

