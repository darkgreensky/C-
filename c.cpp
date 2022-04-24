#include <iostream>
using namespace std;
int f;
class CDemo
{
private:
	const int num;
	int & ref;
	int value;
public:
	CDemo(int n):num(n), ref(f), value(4)
	{
	}
};
int main()
{
	cout << sizeof(int) << endl;
	cout <<sizeof(CDemo) << endl;
	return 0;
}