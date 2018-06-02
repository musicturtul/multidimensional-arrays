//============================================================================
// Name        : multidimensional-arrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string animals[2][3] = {
			{"fox", "dog", "squirrel"},
			{"panda", "rabbit", "giraffe"}
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++){
			cout << animals[i][j] << flush;
			if (j<2) {
				cout << ", " << flush;
			}
		}
		cout << endl;
	}
	   int multTable[10][10];

	   for(int i = 0; i <10; i++){
		   for(int j = 0; j < 10; j++){
			   multTable[i][j] = (i + 1) * (j+1);
		   }
	   }

	   for(int i = 0; i < 10; i++) {
		   for(int j = 0; j < 10; j++) {
			   cout << multTable[i][j] << " " << flush;
		   }
		   cout << endl;
	   }
	return 0;
}
