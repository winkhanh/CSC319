
#include <cassert>
#include "Project1.h"

using std::cin;
using std::cout;
using std::endl;


void genericTests() 
{
	assert(countWords("") == 0);
	cout << "test #1 completed" << endl;

	assert( countWords("! $ ? . , : ;") == 0);
	cout << "test #2 completed" << endl;

	assert( countWords("abc def") == 2);
	cout << "test #3 completed" << endl;
	
	assert( countWords("abc   def") == 2);
	cout << "test #4 completed" << endl;
	
	assert( countWords("abc\ndef") == 2);
	cout << "test #5 completed" << endl;
		
	assert( countWords("abc-ndef") == 2);
	cout << "test #6 completed" << endl;
	
	assert( countWords("abc-\nndef") == 1);
	cout << "test #7 completed" << endl;
	
	assert( countWords("abc def def\nabc") == 4);
	cout << "test #8 completed" << endl;
	
	assert( countWords("ab\nab!ab?ab:ab.ab;ab\nab") == 8);
	cout << "test #9 completed" << endl;
	
	assert( countWords("ab\nAB!ab?AB:ab.AB;ab\nAB", true, true) == 2);
	cout << "test #10 completed" << endl;

	assert( countWords("ab\nAb!aB?AB:ab.AB;ab\nAB\nZZZZ zzzz Zzzz\nzzzz", false, true) == 2);
	cout << "test #11 completed" << endl;
	 
}

void yourTests() 
{
	//Test for unique word that is hyphenated in different line
	assert( countWords("abc ab-\nc bcd",false,true) == 2);
	cout << "additional test #1 completed" << endl;

	//Test for hyphenate twice
	assert( countWords("abc-\nndef-\nabc") == 1); 
	cout << "additional test #2 completed" << endl;

	//Test for none hyphen but - at the end of line
	assert( countWords("oneW-\n ord One-\nword") == 3); 
	cout << "additional test #3 completed" << endl;
	
	//Test hyphen with 2 new line and hypephnate twice in a row 
	assert( countWords("one-\n\nword  one-\n-\nword") == 4); 
	cout << "additional test #4 completed" << endl;
}
int main()
{
	genericTests();
	
	yourTests();
	
	return 1;
}

