#include <iostream>
using namespace std;
int main()
{
	int i = 2;
	double d = 5.5;
	i *= static_cast<int>(d);
	cout << i << endl;
	system("pause");
	return 0;
}