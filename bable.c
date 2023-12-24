#include<stdio.h>

void swap(int*p,int*k)
{
	int i,j;
	int temp=*p;
	*p=*k;
	*k=temp;
	
}


void sorting(int a[],int n)
{
	int i,j;
	for(i=0;i<=n-2;i++)
	{
		for(j=1;j<=n-1-i;j++)
		{
			if(a[i]<a[j])
			{
			swap(&a[j],&a[i]);	
			
			}
		}
		
	}
	
}

int main()
{ 
int i;
	int a[5]={23,45,3,46,3};
	int n=sizeof(a);
	sorting(a,n);
	 
	for(i=0;i<n;i++)
printf("%d",a[i]);
return 0;
}
