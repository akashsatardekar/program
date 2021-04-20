#include <iostream>
using namespace std;
int main()
{
    int age;
    char name[10];
    cout << "Enter your name: ";
    cin >> name;
	cout << "Enter your age: ";
	cin >> age;
	if (age>=18)
	{
		cout << name <<" you are eligible";
	}  
	else
	{
		cout << name << " you are not eligible";
	}
    return 0;
}
