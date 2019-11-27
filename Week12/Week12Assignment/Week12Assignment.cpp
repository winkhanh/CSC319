// Week12Assignment.cpp 
// Dominic Le

#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <algorithm>  //sort

using std::cout;
using std::endl;
using std::ostream;
using std::accumulate;

using namespace std;


class Shape {

private:
	int x; 
	int y; 

	string name; 

public:
	Shape(int px, int py, string pname) : x(px), y(py), name(pname) { 
		
	}

	virtual ~Shape(){
	}
	
	virtual  string  getName() const  { return name; }
};


class Square : public Shape {

private:
	int length;

public:

	Square(int px, int py, string pname, int plength) : length(plength), Shape(px, py, pname) { ; }
	int getLength(){return length;}
};

int main()
{
	//C++ is a typed language, each container is defined
	//to manage a specific type. With objects, you can have a container
	//specified for a superclass, but any of its subclasses can be 
	//manage by the containers
	vector<Square *>  squares;

	squares.push_back(new Square(1, 1, "1st square", 1) );
	squares.push_back(new Square(2, 2, "2nd square", 2) );
	squares.push_back(new Square(3, 3, "3rd square", 3) );

	//1-Assignment: sort them in descending order of length, 
	// then cout their lenght and name
	sort(squares.begin(),squares.end(),[](Square *x,Square *y)->bool{
		return x->getLength() > y->getLength();
	});
	for (Square* square: squares)
		cout<< square->getLength() << " "<< square->getName() <<endl;
	//map : unique, multi-map : duplicate
	map<string, Square *> mapSquares;

	std::transform(squares.begin(), squares.end(), std::inserter(mapSquares, mapSquares.end()),
               []( Square *s) { return std::make_pair(s->getName(), s); });
			   
	//2-Assignment: using the map, display the lenght of the square named "2nd square"
	cout<< mapSquares["2nd square"]->getLength();
	return 0;

}