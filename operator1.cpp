#include<iostream>
using namespace std;

class roll
{
		public:
			int n=1;
			
			get(int n1)
			{
				n=n1;
			}
			d()
			{
				cout<<n<<endl;
			}
			roll operator ++
			()
			{
				n=n+1;
			}
};
int main()
{
	roll r;
	++r;
	r.d();
		return 0;
}
