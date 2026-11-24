/*
  * Lab    : 01 - T4
  * Name   : Hasnat Qadeer
  * Roll No: 26-SE-31
  * Date   : 24-Nov-2026
  * Purpose: Bug hunt: using AI
*/  
/*
  * Error: 'end' was not diclared in this scope
  * AI tool: Gemini
  * AI said: 'end' does not exist in C++, 'endl' is used for a next line
  * Fix: Repaced  'end' with 'endl'
  * Verdict: AI was correct
  * Because: After the fix, the program compiled and give the expected output
*/
#include <iostream>
using namespace std;

int main()
{
	cout << "Lab 01 complete!" << endl;
	cout << "Next lab: Variables and Input" << endl;  // Bug: l was missing in endl
	return 0;
}
