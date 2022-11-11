//Destructor- destroy the object created by constructor
#include<iostream>
using namespace std;
class A
{
	public:
		   A()
		   {
		   	cout<<"\nDefault constructro called";
		   }
		   ~A()
		   {
		   	cout<<"\nDestructor is called";
		   }
};
int main()
{
	A a1;
	return 0;
}
