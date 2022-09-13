#	42-CPP-MODULES

Here we embark on a new journey of not so different than C language. Yes it is a C++ pool, designed to be a full learning by doing course, which covers main concepts of C++ in order to establish and acknowledge the differencies between C and C++ which explains the need for C++.

##	Table Of Contents

*	Module00:
- In this module, we are being introduced to C++ with a small problem which can be solved using the toUpper function which aims to be a good first step other than the typical "Hello, World!" program we all started with, then followed by a fun project of making a basic and limited phonebook, which serves as an introduction to Object Oriented Programming, which is an extension of structures in C, but the main difference is that in C++ we can create an object out of this structure, for example:
```cpp
class	Human {
	private:
		std::string name;
		std::string	gender;
		std::string	language;
		int			age;
	public:
		Human(std::string name) {
			this->name = name;
		}
		void	setAge(int age) {
			this->age = age;
		}
		void	setGender(std::string gender) {
			this->gender = gender;
		}
		void	setLanguage(std::string lang) {
			this->language = lang;
		}
		void	talk(std::string language) {
			std::cout << "saying something" << std::endl;
		}
		int getAge() {
			return this->age; 
		}
		std::string	getName() {
			return this->name;
		}
		std::string	getGender() {
			return this->gender;
		}
		std::string	getLanguage() {
			return this->language;
		}
};

int	main() {
	Human	*x = new	Human("Achraf");
	x->setAge(23);
	x->setLanguage("english");
	x->setGender("male");
	std::cout << "Human name is: " << x->getName() << std::endl;
	std::cout << "Age: " << x->getAge() << std::endl;
	std::cout << "Gender: " << x->getGender() << std::endl;
	x->talk(x->getLanguage());
	delete	x;
}
```

- In the example above we created an object from the class human, called it Achraf which has the characteristics of a human, Since every human must have a name, gender, age and speaks a certain language


[0]: 