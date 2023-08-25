#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Enter the first number (a)";
	cin >> a;
	cout << "Enter the second number (b)";
	cin >> b;
	a = a + b ;
	b = a - b ;
	a = a - b ;
	
	cout << "After swapping " <<endl;
	cout << "First number is " << a << "Second number is " << b;
	return 0;
}
