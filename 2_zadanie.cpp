#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string worlds(string str, int w[6])
{
	for (int i = 0; i < 6; i++)
		w[i] = 0;
		
	for (int k = 0; k < str.length(); k++)
	
	{
		if (str[k] == 'a')
			w[0]++;
			
		if (str[k] == 'e')
			w[1]++;
			
		if (str[k] == 'y')
			w[2]++;
			
		if (str[k] == 'u')
			w[3]++;
			
		if (str[k] == 'i')
			w[4]++;
			
		if (str[k] == 'o')
			w[5]++;
	}
	
	return str;
}


int main()
{
	string str;
	
	int mas[6];
	
	getline (cin,str);
	
	worlds(str,mas);
	
	cout << "a = " << mas[0] << " " << "e = " << mas[1] << " " << "y = " << mas[2] << " " << "u = " << mas[3] << " " << "i = " << mas[4] << " " << "o = " << mas[5] << endl;
	return 0;
}
	

