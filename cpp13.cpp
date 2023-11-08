#include <iostream>
using namespace std;

int main()
{
	double n1,n2,n3;
	
	cout << "Enter any three numbers";
	cin >> n1 >> n2 >> n3 ;
	
	if(cin.fail())
	{
		cout << "Not integers!";
	}
	else if(n1 > n2 && n1 > n3)
	{
		cout << n1 << " is greater than " << n2 << " and " << n3 << endl;
	}
	else if(n2 > n1 && n2 > n3)
	{
		cout << n2 << " is greater than " << n1 << " and " << n3 << endl;
	}
	else if(n3 > n1 && n3 > n2)
	{
		cout << n3 << " is greater than " << n1 << " and " << n2 << endl;
	}
	else if(n1 == n2 && n1 > n3)
	{
		cout << n1 << " and " << n2 << " are greater than " << n3 << endl;
	}
	else if(n2 == n3 && n2 > n1)
	{
		cout << n2 << " and " << n3 << " are greater than " << n1 << endl;
	}
	else if(n3 == n1 && n3 > n2)
	{
		cout << n3 << " and " << n1 << " are greater than " << n2 << endl;
	}
	else if (n1 == n2 && n2== n3)
	{
		cout << "All the numbers are equal";
	}
	else
	{
		cout << "Error!";
	}
	return 0;
}
