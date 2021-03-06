#include <stdio.h>

int main() 
{
	int p,h,x;
	int t; // to store x + i1+ i2....which should be compare to h.
	scanf("%d",&p); //different time zone
	scanf("%d",&h); // total hours to solve this
	scanf("%d",&x); //x hours are left
	int n[p];
	for (int i=0;i<p;i++)
	{
		scanf("%d",&n[i]);
	}
	int s;
	for (int i=0;i<p;i++)
	{
		
		int k = n[i]+x;
		if (k >= h)
		{
		 s=1;
		 break;
		}
		else 
		{
		 s=0;
		 continue;
		}
	}
	if (s == 1)
	{
		printf("YES");
	}
	else
	{
		printf("No");
	}


	

}
