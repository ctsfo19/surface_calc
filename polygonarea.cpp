#include <iostream>
#include <cmath>
#include "polygonarea.lib"

using namespace std;

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

		vertex vertices[n];
		for (int i = 0; i < n; i++){
			cin >> vertices[i].x >> vertices[i].y;
		}
		cout << "The area of given polygon equals:" << endl;
		cout << polygonArea(n, vertices) << endl;
	}
	else{
		cout << "Input coordinates of vertices, each coordinate of one vertex separated from the other by a single space and each vertex separated by an enter" << endl;
		
		cin >> a.x >> a.y;
		cin >> b.x >> b.y;
		cin >> c.x >> c.y;

		cout << "The area of given triangle equals:" << endl;
		cout << triangleArea(a,b,c) << endl;
	
	}
	return 0;
}
