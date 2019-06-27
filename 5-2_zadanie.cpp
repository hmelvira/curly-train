#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string worlds(string str, int w[6])
{
	for (int i = 0; i < 6; i++)
		w[i] = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'a')
			w[0]++;
			
		if (str[i] == 'e')
			w[1]++;
			
		if (str[i] == 'y')
			w[2]++;
			
		if (str[i] == 'u')
			w[3]++;
			
		if (str[i] == 'i')
			w[4]++;
			
		if (str[i] == 'o')
			w[5]++;
	}
	
	return str;
}

int main()
{
	string str("help me please aa  yeap under ice objects");
	
	int mas[6];
	
	worlds(str, mas);
	
	cout << str << endl;
	
	cout << "test 1: ";
	
	if (mas[0] == 4 && mas[1] == 8 && mas[2] == 1 && mas[3] == 1 && mas[4] == 1 && mas[5] == 1)
	{
		
		cout << "right" << endl;
			
	}
	else
	{
		cout << "wrong" << endl;
	}
	
	string result(" ");
	
	worlds(result, mas);
	
	cout << "test zero: ";
	

	if (mas[0] == 0 && mas[1] == 0 && mas[2] == 0 && mas[3] == 0 && mas[4] == 0 && mas[5] == 0)
	
	{
	
		cout << "right" << endl;
		
	}
	
	else
	
	{
	
		cout << "wrong" << endl;
		
	}
	return 0;
}
