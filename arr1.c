#include<Stdio.h>
#define max 50

int main()
{
	int temp,size,i,j,a[max];
	
	printf("enter size of array: ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;
}
