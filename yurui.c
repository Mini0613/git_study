#include "yurui.h"
 
#define N  10

int git_yurui()
{
	int a[N];
	int i,j,t;
	for(i=0;i < N;i++)
	{
		for(j=0;j<=N-i+1;j++)
		{
			if(a[i] > a[i+1])
			{
				t      = a[i];
				a[i]   = a[i+1];
				a[i+1] = t;
			}
		}
	}

	for(i=0;i < N;i++)
	{
		printf("%d",i);
	}
	return 0;

}

