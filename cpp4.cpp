#include <iostream>
using namespace std;

int main()
{
	int divisor, divident, quotient, remainder;
	cout << "Enter the Divident :";
	cin >> divident;
	cout << "Enter the Divisor :";
	cin >> divisor;
	
	quotient = divident / divisor;
	remainder = divident % divisor;
	
	cout << "By dividing " << divident << " by " << divisor;
	cout << " we get quotient " << quotient << " and remainder as " << remainder;
	
	return 0;
}
