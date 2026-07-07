// Weird Function1

#include <iostream>
using namespace std;

int weird(int &x)
{
	int result = ((2*x) + 3);
	return result;
}

int main()
{
	int x;
	cout << weird(weird(weird(x)));

}