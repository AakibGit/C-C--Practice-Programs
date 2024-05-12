#include<iostream>

using namespace std;

class demo
{
    static int a;
    
    public:
        void get_dis(int x)
        {
            a=x;
            cout<<"the entered number is "<<a<<endl;
            a++;
        }
        void dis()
        {
        	cout<<a<<endl;
		}
};
	int demo::a=0;
int main()
{
 demo w,w1;
 w.get_dis(4);
 w1.dis();  
}
