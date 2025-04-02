#include <iostream>
using namespace std;
int num = 0;
void move(int n)
{
	if (n == 1)
	{
		num += 1;
	}
	else
	{
		move(n - 1);
		num += 1;
		move(n - 1);
	}
}
int main()
{
	int n;
	cin >> n;
	move(n);
	cout << num << endl;
	return 0;
}