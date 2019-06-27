#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int a=0, u=0, e=0, o=0, y=0, i=0;
	getline(cin, str);
	for (int n=0; n<str.length(); n++) {
		if (str[n]=='a') {
			a++;
		} else if (str[n]=='u') {
			u++;
		}
		if (str[n]=='e') {
			e++;
		} else if (str[n]=='o') {
			o++;
		}
		if (str[n]=='y') {
			y++;
		} else if(str[n]=='i') {
			i++;
		}
	}

	cout<<" a="<<a<<" u="<<u<<" e="<<e<<" o="<<o<<" y="<<y<<" i="<<i<<endl;
	return 0;
}

