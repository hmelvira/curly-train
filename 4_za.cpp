#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void Zbukv(string &str)
{
	for (int i = 0; i < str.length(); i++)
	
	{
		if (str[i] == 'A')
			str[i] = 'a';
			
		if (str[i] == 'E')
			str[i] = 'e';
			
		if (str[i] == 'Y')
			str[i] = 'y';
			
		if (str[i] == 'U')
			str[i] = 'u';
			
		if (str[i] == 'I')
			str[i] = 'i';
			
		if (str[i] == 'O')
			str[i] = 'o';
	}

}
int main()
{
	string k;
	
	getline(cin, k);
	
	Zbukv(k);
	
	cout << k << endl;
	
	return 0;
}
