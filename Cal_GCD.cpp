#include <iostream>

using namespace std;

int total(int, int);

int main() {

	int x, y;

	cout << "Enter the first number: " << endl;
	cin >> x;
	cout << "Enter the second number: " << endl;
	cin >> y;

	cout << "The GCD (Greatest Common Divisor) of (" << x << ") and ("
		<< y << ") is: " << total(x, y) << endl;
	system("pause");
	return 0;
}


int total(int x, int y) {
	if (y%x == 0)
		return x;
	if (x > y)
		return total(y, x);
	else
		return total(y%x, x);
}

//Alberto Garib
