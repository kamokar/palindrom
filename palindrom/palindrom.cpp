#include <iostream>
#include <string>
using namespace std;

bool jestPalindrom(string txt)
{
	int len = txt.length();
	for (int i = 0; i < len/2; i++)
		if (txt[i] != txt[len - i - 1])	
			return false;
	return true;
};

int main()
{
	string t = "abba";
	if (jestPalindrom(t))
		cout << "Jest palindromem" << endl;
	else
		cout << "Nie jest palindromem" << endl;






















	getchar();
	return 0;
}