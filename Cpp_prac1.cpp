//het Kanzariya

#include<iostream>
using namespace std;

class Employee
{
	public:
		int input1;
		int input2;

	void getInfo(int s, int n)
	{
		input1 = s;
		input2 = n;
	}

	void AddSal()
	{
		if(input1<500)
			input1+=10;
	}

	void AddWork()
	{
		if(input2>6)
			input1+=5;
	}

	void printFunc()
	{

		AddSal();
		AddWork();
		cout << "Final salary of employee is " << input1 << endl;
	}
};


int main()
{
	float sal;
	int num;
	printf("Enter salary: ");
	scanf("%f",&sal);
	printf("Enter working hours: ");
	scanf("%d",&num);

	Employee emp1;
	emp1.getInfo(sal,num);
	emp1.printFunc();

	return 0;
}
