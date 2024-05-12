#include<iostream>

using namespace std;

int main()
{

  int arr[5];
  int i,j,t=0;
  
  cout<<"Enter element in array"<<endl;
  
  for(i=0;i<5;i++)
  {
  	cout<<"Enter number "<<i<<": ";
  	cin>>arr[i];
  }
  
  cout<<"\n";
  
//  for(i=0;i<5;i++)
//  {
//  	cout<<"The Number in array are  at "<<i<<": "<<arr[i]<<endl;
//  }
//  
//  cout<<"The sorted array are "<<endl;
  
  for(i=0;i<5;i++)
  {
  	for(j=0;j<5;j++)
  	{
  		if(arr[i]<arr[j])
  		{
  			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;	
		}
	}
  }
  
 for(i=0;i<5;i++)
  {
  	cout<<"The Sorted array are "<<i<<": "<<arr[i]<<endl;
  }
 return 0;
}

