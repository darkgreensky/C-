#include <iostream>

using namespace std;

class CBase 
{
private: int nPrivate;
public: int nPublic;
protected: int nProtected;
public:
	void set(int t)
	{
		nPrivate = t;
	}
	void print()
	{
		cout << "nPrivate: " << nPrivate << endl;
	}
	CBase()
	{
		nPublic = 1;
	}
};

class CDerived:public CBase
{
public:
	void AccessBase()
	{
		// nPublic = 2;
		// nPrivate = 1;
		set(10);
		print();
		// nProtected = 1;
		// CBase f;
		// f.nPublic = 1;
	}
};

int main()
{
	CBase b;
	CDerived d;
	d.AccessBase();
	//cout << d.nPublic << endl;
	return 0;
}