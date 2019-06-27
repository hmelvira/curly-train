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
	string strk("LOLAAAUUPIIOEY"); 
	Zbukv(strk);
	bool k = false;	if (strk == "LoLaaauuPiioey" ) 
		k = true;
	if (!k)
		cout << "wrong" << endl;
	else
		cout << "right" << endl;
	system("pause");
	return 1;
}
