#include<iostream>
using namespace std;

int sum(int n) {
	if (n == 0) {
		return 0;
	}
	else
		return sum(n - 1) + n;
}

int main()
{
	int r;
	int x;
	cout << "Enter no of terms " << endl;
	cin >> r;
	x=sum(r);
	cout <<x;
	return 0;
}