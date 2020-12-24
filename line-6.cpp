#include <iostream>

using namespace std;

int main()
{
	int n;
	double a, r = 0;
	cout << "Enter a and radius" << endl;
	cin >> a >> r;
	n = ((a / 2 * r) - sqrt(3) + 1);
	if (n <= 0) {
		n = 0;
	}
	else {
		n = n * (n + 1) / 2;
	}
	cout << n << endl;
	system("pause");
}