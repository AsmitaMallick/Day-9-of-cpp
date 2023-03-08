#include<iostream>
using namespace std;
typedef struct employee{
	int id;
	char favChar;
	float salary;
	
}ep;
int main()
{
	ep asmita;
	ep harry;
	ep gungun;
	asmita.id = 6;
	asmita.favChar = 'a';
	asmita.salary = 690000;
	gungun.id = 8;
	cout<<"the value is: "<<asmita.id<<endl;
	cout<<"the value is: "<<asmita.favChar<<endl;
	cout<<"the value is: "<<asmita.salary<<endl;
	cout<<"the value is: "<<gungun.id<<endl;
	
	
	
	return 0;
}
