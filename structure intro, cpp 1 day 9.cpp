#include<iostream>
using namespace std;
struct employee{
	int id;
	char favChar;
	float salary;
	
};
int main()
{
	struct employee asmita;
	asmita.id = 6;
	asmita.favChar = 'a';
	asmita.salary = 690000;
	cout<<"the value is: "<<asmita.id<<endl;
	cout<<"the value is: "<<asmita.favChar<<endl;
	cout<<"the value is: "<<asmita.salary<<endl;
	
	
	
	return 0;
}
