#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main() {
	double hasil;
	int x = -3;

	hasil = logb(x);
	cout << "logb(" << x << ") = " << "log(|" << x << "|) = " << hasil << endl;

	_getch();
	return 0;
}