#include <iostream>
using namespace std;
#define WW1(x) x*x
#define WW2(x) (x)*(x)
int a;
int b = -3;
int main()
{
	int r = WW1(a + b);
	int rc = WW2(a + b);
	cout << r << endl;
	cout << rc << endl;

}