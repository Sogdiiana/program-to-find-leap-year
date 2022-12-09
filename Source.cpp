#include <iostream>
using namespace  std;
int main()
{
	int a,b;//finding a leap year
	cout << "enter the year - ";
	cin >> a;
	b=a%4;// %4 means divided into 4 , if the answer is integer ,it is a leap year
	if (b==0)
	{
		cout << "this is a leap year !!!";
	}
	else 
	{
		cout << "it's not a leap year (( ";
	}
	return 0;
}