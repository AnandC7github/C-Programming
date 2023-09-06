#include<iostream>
using namespace std;
int main(){
	char c;
	bool lowcase, upcase;
	cout << "Enter the charecter :";
	cin >> c;
	lowcase = ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' );
	upcase = ( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' );
	
	if(lowcase || upcase)
	{
		cout << c << " is a vowel!";
	}
	else if(!isalpha(c))
	{
		cout << c << " is not an alphabetic charecter!";
	}
	else 
	{
		cout << c << " is a consonant and not a vowel!";
	}
	return 0;
}
