#include<iostream>
#include<string>

using namespace std;


void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}


//void myFunction(string country = "Norway") {
//  cout << country << "\n";
//}
//
//int main() {
//  myFunction("Sweden");
//  myFunction("India");
//  myFunction();
//  myFunction("USA");
//  return 0;
//}

//void name(string s1="c++ programming")
//{
//	cout<<s1<<endl;
//}
//
//int main()
//{
//	name();
//	
//}
