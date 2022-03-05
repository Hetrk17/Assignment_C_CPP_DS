//Het Kanzariya

#include<iostream>
using namespace std;

class AddAmount
{
	private:
		int amount;

	public:
		AddAmount()				// Default Constructor
		{
			amount=50;
			cout <<"Final amount = "<< amount << endl;
		}
		AddAmount(int amt)		// Parametrized Constructor
		{
			amount=50;
			amount+=amt;
			cout <<"Final amount = "<< amount << endl;
		}
};

int main()
{
	AddAmount AA1(50);
	AddAmount AA2;
	return 0;
}
