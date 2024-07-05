#include <iostream>
using std::cout;
using std::endl;

//C++ - Defining Data On The Stack vs. The Program Image   //ref link:https://www.youtube.com/watch?v=mDx7YspeCqw&list=PLRwVmtr-pp04StYuWs0n765aXyrlL2kl1&index=2
// Types of memory:	Main(The Heap, The Stack), The Program image(outside scope of main/everything thats not define in a function/or instantiated via new out of the heap)

struct IntHolder
{
	int myInt1;
	int myInt2;
	double myDouble;
};

void main()
{
	IntHolder holder;
	cout << holder.myInt1 << endl;		//output:16855076
	cout << holder.myInt2 << endl;		//output:0
	cout << holder.myDouble << endl;

	//int myInt;	// (runtime)this variable is in the stack
	//cout << myInt << endl;
}







//int myInt; //this is same as static int, global to anything, 4bytes int
//
//void anotherFunction()
//{
//	myInt = 12341231;
//}
//
//void main()
//{
//	cout << myInt << endl;		// output:0
//	myInt = 10;
//	cout << myInt << endl;		// output:10
//	anotherFunction();
//	cout << myInt << endl;		// output:12341231
//}

//void anotherFunction()
//{
//	myInt = 12341231;	// myInt can be here cause its global
//}