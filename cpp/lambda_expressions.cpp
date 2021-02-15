//lambda expressions are available from c++ 11 version
#include <iostream>
using namespace std;
template <typename T> void funct (T p); //function prototype
int main ()
{
    [] () { cout << "Hello, World!" << '\n'; } ();
    //capture list [], parameter list (), body of the function {}, calling the function there itself with ().
    //alternate way to do this

    auto f = [] () { cout << "Hey there!" << '\n'; };
    // defining an unnamed function and and assigning name of that function as "f", Here "f" is reference to that function,
    //or a pointer to that function.
    f (); //calling the function using reference

    [] (int x, int y) { cout << "Sum is: " << x + y << '\n'; } (10, 20); //creating an unnamed function with parameters
    //and calling it with values 10 and 20;
    //alternate way 
    auto x = [] (int x, int y) { cout << "difference is: " << x - y << '\n'; };
    x (20, 10); //calling the function with reference x and printing the difference of 20 and 10.

    cout << ([] (int x, int y) { return x + y; } (100, 20)) << '\n'; //method to return sum and print it 
    //NOTE: [] (int x, int y) { return x + y; } (100, 20) must be closed in paranthesis for printing or it will generate an error

    int a = [] (int x, int y) { return x - y; } (120, 30); //assigning diff of x and y to variable 'a'
    cout << a << '\n';

    //mentioning return type of the variable as well
    int b = [] (int x, int y) -> int { return x * y; } (2, 3); 
    //mentioning the return type -> int like this
    cout << b << '\n';
    cout << '\n';
    //Another feature of lambda expression
    //suppose we have some variables inside the main () function
    //and we want to access those variables inside our lambda expression.
    //we can either mention them in capture list, pass them through parameters or use [&]
    //to access those variables inside the current function.
    //[&] : means that we want access to every variable in the current function
    //eg:
    int my_var = 10;
    int my_sec_var = 20;
    [my_var] () { cout << "value of my_var is: " << my_var << '\n'; } ();
    auto fun = [my_var, my_sec_var] () { cout << "value of my_var is: " << my_var << "\nand value of my_sec_var is: " << my_sec_var << '\n'; };
    fun ();
    my_var++;
    fun ();
    //here value of my_var will not change as we just used a copy of that variable instead of that actual variable
    //to actually use that variable we need to access it by reference.
    //so we can do instead:
    // auto fun = [&my_var, &my_sec_var] () { cout << "value of my_var is: " << my_var << "\nand value of my_sec_var is: " << my_sec_var << '\n'; };
    //then after that if we increase the value of my_var and then call the function second time we will get the increased value.
    //eg->
    int m = 10;
    auto fun2 = [&m] () { cout << "value of m is: " << m << '\n'; };
    fun2 ();
    m++;
    fun2 (); //value of m will become 11 from 10 after m++ since we use that value as a reference.
    //therefore in the capture list we can mention the list of variables that are present in the same scope
    //and can access them and modify them.

    //Another feature of lambda expression
    //is that they can be sent to a function as parameters.
    int n = 100;
    auto f2 = [&n] () { cout << "n++ = " << n++ << '\n';};
    funct (f2);
    funct (f2);
    return 0;
}
template <typename T> void funct (T p) 
{
    p (); //it can still access the captured variable n here.
}
