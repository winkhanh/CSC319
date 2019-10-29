// Week5Assignment.cpp : 
//
// Your names
//

#include <string>
#include <vector>
#include <iostream>  //to do input & output
#include <fstream>   //to do file input & output
#include <iomanip>  // io formatting
#include <sstream>  // std::istringstream

#include "Week5Assignment.h"

using std::string;
using std::vector;
using std::ostringstream;

/*
	add2Integer: receives 2 integer in a stream, parse them and return their sum
*/
int add2Integer(std::istringstream * iss) {

	//implement your code here
	return 1234;
}

/*
output2Integer: receives 2 integer, and output them in a string as "######,######"
             using ostringstream
*/

string output2Integer(int x, int y) {
	std::ostringstream oss;

	//implement your code here
	return "";
}

//take a look at: http://www.cplusplus.com/reference/ios/left/
/*
output2Integer: receives 2 integer, and output them in a string as "######,######"
using ostringstream, but it must be left justify instead or right justify like  output2Integer

for 123 and 456 the result will be:  123###,456###
*/
std::string output2IntegerLeftJustify(int x, int y) {

	//implement your code here

	return "";
}

/*
add2Double: receives 2 double in a stream, parse them and return their sum
*/
double add2Double(std::istringstream * iss) {

	//implement your code here

	return 0;
}

/*
output2Double: receives 2 double, and output them in a string as "x,y", each with 4 digits
using ostringstream
*/
string output2Double(double x, double y) {

	//implement your code here

	return string("");
}

/*
countLine: count the number of line in the input stream

see video: https://www.youtube.com/watch?v=U1r8HLllInM and
	       https://www.youtube.com/watch?v=wpDSWDbGXrQ

*/
int countLine(std::istringstream * iss) {

	//implement your code here

	return 0;
}
