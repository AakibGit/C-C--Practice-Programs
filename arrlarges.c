#include<stdio.h>

int main()
{
	int a[10],n,i,large,small;
	printf("enter the number of element: ");
	scanf("%d",n);
	
	printf("enter the element ");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	large=a[0];
	small=a[0];
	
	
	for(i=1;i<n;i++)
	{
	 	if(a[i]>large)
		 {
		 	large=a[i];
		 }
		 if(a[i]<small)
		 {
		 	small=a[i];
		 }
		
	}
	printf("largest element in the array is : %d\n",large);	
	printf("smallest  element in the array is : %d\n",small);	
	
	return 0;
}
