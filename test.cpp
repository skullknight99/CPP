#include <iostream>

using namespace	std;

int	main(){
	int	x;
	while(1)
	{
		cout << "Enter a number to multiply by 2: ";
		cin >> x;
		if (!cin)
			break;
		cout << x*2 << endl;
	}
}