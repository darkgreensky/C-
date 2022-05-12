#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	s1 = "string";
	s2 = s1;
	s2[0] = 't';
	cout << s1 << endl;
	cout << s2 << endl;
	return 0;
}