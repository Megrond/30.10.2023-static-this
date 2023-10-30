#include <iostream>

using namespace std;

class Demo {
public:
	static int some;
	int x;
	int c;
	int r;

	static void print()
	{
		cout  << some << endl;
	}
	Demo& setX(int x)
	{
		this->x = x;
		return *this;
	}
	Demo& setC(int c)
	{
		this->c = c;
		return *this;
	}
	Demo& setR(int r)
	{
		this->r = r;
		return *this;
	}

	void showSum()
	{
		cout << x + c + r << endl;
	}
};

int Demo::some = 10;

int main()
{
	Demo d1;
	d1.setX(123).setC(456).setR(789).showSum();




	//Demo obj1{100};
	//Demo obj2{ 111 };

	//std::cout << obj1.x << " " << obj2.x << " " << obj1.some << std::endl;
	//obj1.some = 20;
	//std::cout << obj1.x << " " << obj2.x << " " << obj1.some << std::endl;
	//Demo::print();
	return 0;
}