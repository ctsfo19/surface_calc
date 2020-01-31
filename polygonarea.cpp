#include <iostream>
#include <cmath>
#include "polygonarea.lib"

using namespace std;

/*declaring vertex as a struct
struct vertex{
	double x;
	double y;
};*/

int main()
{
	//declaring main variables
	string choice;
	int n;
	vertex a, b, c;
	//interacting with user input
	cout << "Do you want to calculate polygon or triangle? " << endl 
	<< "type p for polygon and t for triangle and hit enter" << endl;
	cin >> choice;
	if (choice == "p"){
		
		cout << "Input number of vertices" << endl;
		
		cin >> n;
		
		cout << "Input coordinates of vertices, each coordinate of one vertex separated from the other by a single space and each vertex separated by an enter" << endl;

	}
	else{
		cout << "Input coordinates of vertices, each coordinate of one vertex separated from the other by a single space and each vertex separated by an enter" << endl;
		
		cin >> a.x >> a.y;
		cin >> b.x >> b.y;
		cin >> c.x >> c.y;

		cout << triangleArea(a,b,c) << endl;
	
	}
	/*
	//number of polygon's vertices
	vertex vertices[n];
	//read n polygon vertices from user input
	for (int i = 0; i < n; i++)
		cin >> vertices[i].x >> vertices[n].y;
	cout << polygonArea(vertices, 6) << endl;
	*/

	

	return 0;
}
