#include <iostream>
using namespace std;

class CDriver;

class CCar 
{
private:
	int price;
	friend class CDriver;
public:
	int myDriver(CDriver & a)
	{
		return a.id;
	}
};

class CDriver
{
private:
	int id;
	CCar myCar;
	void modifyCar()
	{
		myCar.price += 1000;
	}
};

int main()
{
	return 0;
}
