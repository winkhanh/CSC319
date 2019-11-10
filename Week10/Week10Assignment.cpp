// Week10Assignment.cpp
//
// Your Name: Dominic Le

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

//
// Implements the Rule of Three for Shape
//
//  The output, is showing the address of name for each instance
//

class Shape {
private:
	int x;
	int y;
	string * name;

public:
	Shape(){
		name=new string;
	};
	Shape(const Shape& otherObj):x(otherObj.x),y(otherObj.y){
		name=new string;
		*name=*(otherObj.name);
	}
	Shape& operator = (const Shape& otherObj){
		x=otherObj.x;
		y=otherObj.y;
		*name=*(otherObj.name);
		
		return *this;
	}
	~Shape(){
		delete name;
	};
	void setX(int px) {
		x = px;
	}
	void setY(int py) {
		y = py;
	}

	void setName(string * str) {
		name = str;
	}
	string * getName() {
		return name;
	}
};

int main()
{
	Shape s1;
	s1.setName( new string("first shape") );

	Shape s2(s1);
	cout << s1.getName() << endl; //will display the address of name for s1
	cout << s2.getName() << endl; //will display the address of name for s2 

	Shape s3;
	s3 = s1;
	cout << s1.getName() << endl; //will display the address of name for s1
	cout << s3.getName() << endl; //will display the address of name for s3

	return 0;
}

