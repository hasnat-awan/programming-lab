/*
  * Lab    : 01 - T3
  * Name   : Hasnat Qadeer
  * Roll No: 26-SE-31
  * Date   : 24-Nov-2026
  * Purpose: Bug hunt: fix five bugs.
*/
#include <iostream>
using namespace std; // Bug 2: missing ; after std.

int main()
{
	cout << "Wellcome to the Lab!" << endl; //Bug 2: missing ; after endl.
	cout << "Today we learn \"C++\"." << endl; //Bug 3: c of cout was capital.
	cout << "Files are in C:\\Lab01" <<endl; // Bug 4: single \ before Lab01.
	cout << "Bye!" <<endl; // Bug 5: missing ;after endl
	return 0;
}
