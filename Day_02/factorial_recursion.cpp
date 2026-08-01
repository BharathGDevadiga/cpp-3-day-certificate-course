#include <iostream>
using namespace std;

int factorial(int number){
	if(number == 0 ){
		return 1;
	}

	return number * factorial(number - 1);
}

int main(){
	factorial(5);

	cout << "Factorial: " << factorial(5) << endl;
	return 0;
}

/*
Expected Output:
-----------------
Factorial: 120
-----------------
*/
