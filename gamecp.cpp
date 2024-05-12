#include<iostream>

using namespace std;

int main()
{
	bool ship[4][4]={
	{0,1,1,0,},
	{0,0,0,0,},
	{0,0,1,0,},
	{0,1,1,0,}};
	
	int hits=0;
	int number_of_turn=0;
	
	while(hits<4)
	{
		int row,column;
		
		cout<<"Selecting coordinate"<<endl;
		cout<<"Select row from 0 t0 3"<<endl;
		cin>>row;
		cout<<"Select column from 0 t0 3"<<endl;
		cin>>column;
		
		if(ship[row][column])
		{
			ship[row][column]=0;
			hits++;
		
		  cout << "Hit! " << (4-hits) << " left.\n\n";
		 } 
		 else {
    	// Tell the player that they missed
    	cout << "Miss\n\n";
  			}
  		number_of_turn++;	
	}
	cout << "Victory!\n";
cout << "You won in " << number_of_turn << " turns";
	return (0);
}
