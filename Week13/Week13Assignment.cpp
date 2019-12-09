// Week13Assignment.cpp : Defines the entry point for the console application.
//
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <array>
#include <map>
#include <functional>
#include <numeric>

using std::cout;
using std::endl;
using std::ostream;
using std::accumulate;
using std::ostream;

using namespace std;

class Shape {


private:
	int x, y;

public:
	Shape(int px, int py) {
		x = px;
		y = py;
	}

	Shape(const Shape & aDemo) {
		x = aDemo.x;
		y = aDemo.y;
	}

	virtual ~Shape() {

	}

	inline const int getX() const { return x; }
	inline void setX(int px) {
		x = px;
	}
	inline void setY(int py) {
		y = py;
	}
	inline const int getY() const  { return y; }
	int operator+ (Shape const &another){
		return this->getArea()+another.getArea();
	}
	virtual  int  getArea() const 
	{
		return x * y;
	}


};


/* int add(   int v1,   int  v2) {
	return v1 + v2;
}

long add(   long  v1,    long v2) {
	return v1 + v2;
}

Shape add( Shape  v1,  Shape  v2) {
	return v1 + v2; // the operator + for a shape, should return the sum of both area
}
 */
template <class T>
auto add(T t1,T t2){
	return t1+t2;
}
//Assignment: write a template function that will replace the 3 versions of 'add' (you may have to add some functions to Shape)
//modify the main to use the template function instead of the 3 'add' functions
int main()
{
	//with a custom class
	Shape s1(1, 2);
	Shape s2(11, 22);

	cout << add<int>( 1, 2 ) << endl;
	cout << add<long long>( 1L, 2L ) << endl;
	cout << add<Shape>( s1, s2 ) << endl;

	return 0;
}

