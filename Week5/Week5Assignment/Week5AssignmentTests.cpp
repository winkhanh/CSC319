

#include <string>
#include <vector>
#include <iostream>  //to do input & output
#include <fstream>   //to do file input & output
#include <iomanip>  // io formatting
#include <sstream>  // std::istringstream
#include <cassert>

#include "Week5Assignment.h"

using std::vector;
using std::string;


void add2IntegerTest()
{
	std::string stringvalues = "123 456";
	std::istringstream iss(stringvalues);

	assert(add2Integer( &iss) == 579);
}

void output2IntegerTest()
{
	assert( !output2Integer(123, 456).compare( "###123,###456" ) );
}

void output2IntegerLeftJustifyTest()
{
	assert(!output2IntegerLeftJustify(123, 456).compare("123###,456###"));
}

void add2DoubleTest()
{
	std::string stringvalues = "1.25 2.50";
	std::istringstream iss(stringvalues);

	assert (add2Double(&iss) == 3.75);
}

void output2DoubleTest()
{
	assert (!output2Double(1.25, 3.14159).compare("1.2500,3.1416") == 0);
}

void countLineTest()
{
	std::string stringvalues = "1\n22\n333\n4444\n55555";
	std::istringstream iss(stringvalues);

	assert( countLine(&iss) == 5);
}

int main() 
{
	add2IntegerTest();
	output2IntegerTest();
	output2IntegerLeftJustifyTest();
	add2DoubleTest();
	output2DoubleTest();
	countLineTest();

}	