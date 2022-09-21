# Templates in C++

## An Introduction to templates in C++

A template in C++ is a feature that allows generic programming. It could be defined as a blueprint for creating classes or functions.

## How do templates work?

Templates like macros in C++, are expanded at compilation time, allows functions to work on different data types without having to rewrite same function or class for said different data types.

## Types of templates

In C++ there are 2 types of templates:

*   **Function template**:
Example of a swap function using template:
```cpp
template    <typename T> void   swap(T &x, T &y) {
    T   tmp;
    tmp = x;
    x = y;
    y = tmp;
}
```

Let's breakdown all the keywords:
1. ```template```: is the keyword that declares using a template.
2. ```<typename T>```: here typename defines a placeholder variable (or more than one), which is to be replaced at compilation time with a different data type based on your own code/problem.
3. ```void  swap(T &x, T &y)```: here we define the void function, the parameters can be substituted to match your needs. As 42 students you have done that before with ft_swap.


*   **Class templates**:
Example of a class using template:
```cpp
template    <class  T>
class   myClass {
    private:
        int i;
        T   var;
    public:
        myClass();
        T   func(T  arg);
};
```
Again here we kick off by declaring a template, as you might have noticed now, the template parameter is explicitly declared as a class, in this scenario this does not make a difference, we could just use typename keyword in that regard. However in some situations where the template is referencing a nested type that depends on another template parameter, the use of typename is necessary.


Here again not so different of function templates the T placeholder can be substituted with different data types and so we avoid rewriting the same class multiple times.

**Defining member functions outside the class template**:

Lets define the: ```T func(T arg)``` function:

```cpp
template    <class T> T   myClass<T>::func(T arg) {
    (void)arg;
    std::cout << "defining the function without compilation errors" << std::endl;
}
```

As you can see, you have to redeclare the template use, and specify the class that the function belongs to same way we create a normal member function for a normal class.


##	Difference between function overloading and templates

As you might have noticed, templates seem to do a faster function overloading of a function that applies same block of code on different data types, so here are the main differencies:

Function overloading | Templates
------------- | -------------
Used when multiple functions do similar operations | Used when multiple functions do identical operations
Can take different number of arguments  | number of arguments is untouched, only the data types change
