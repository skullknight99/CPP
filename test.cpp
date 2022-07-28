#include<iostream>
#include<sstream>
using namespace std;

int main(){
	int decimal = 61;
	stringstream my_ss;
	my_ss << hex << decimal;
	string res = my_ss.str();
	cout << "The hexadecimal value of 61 is: " << res;
}