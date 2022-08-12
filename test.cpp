#include <iostream>

using namespace	std;

class	A {
	private:
		void	printH();
		void	command(string a, string b, void(A::*func)());
	public:
		void	call();
};

void	A::printH() {
	cout << "H\n";
}

void	A::command(string a, string b, void(A::*func)())
{
	if (a == b)
	{
		(this->*func)();
	}
}

void	A::call() {
	command("a", "a",&A::printH);
}


int	main() {
	A	a;
	a.call();
}