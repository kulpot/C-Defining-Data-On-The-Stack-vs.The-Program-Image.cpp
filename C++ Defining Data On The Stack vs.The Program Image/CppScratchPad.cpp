#include <iostream>
using std::cout;
using std::endl;

//C++ - Defining Data On The Stack vs. The Program Image   //ref link:https://www.youtube.com/watch?v=mDx7YspeCqw&list=PLRwVmtr-pp04StYuWs0n765aXyrlL2kl1&index=2

int myInt; //this is same as static int, global to anything, 4bytes int

void anotherFunction()
{
	myInt = 12341231;
}

void main()
{





	//cout << myInt << endl;		// output:0
	//myInt = 10;
	//cout << myInt << endl;		// output:10
	//anotherFunction();
	//cout << myInt << endl;		// output:12341231
}

//void anotherFunction()
//{
//	myInt = 12341231;	// myInt can be here cause its global
//}