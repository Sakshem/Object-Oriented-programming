//Use of function template
#include <bits/stdc++.h>
using namespace std;
//normal swap function
void mySwapInt (int& a, int& b) //swap function for integers
{
    cout << "mySwapInt function called!" << '\n';
    int t = a;
    a = b;
    b = t;
}
//function template to swap two variables
template <class T> void mySwap (T& a, T& b) //generic swap function for all data types
{
    cout << "mySwap function called!" << '\n';
    T c = a;
    a = b;
    b = c;
}
//normal function to find greater of two integers
int myMaxInt (int a, int b) //returns largest of two numbers (a) and (b)
{
    cout << "myMaxInt function called!" << '\n';
    return a > b ? a : b;
}
//template function to find max of two numbers
template <class T> T myMax (T first, T second) //function to return max of any types of two numbers (float, double, int..)
{
    cout << "myMax function called!" << '\n';
    return first > second ? first : second;
}
template <class T, class R> void add (T a, R b) //adding two numbers of different data type
{
    cout << "addition of two numbers are:" << '\n';
    cout << a + b << '\n';
}
int main ()
{
    int a, b;
    cin >> a >> b;
    mySwap (a, b);
    mySwapInt (a, b);
    cout << "a: " << a << " b: " << b << '\n';
    cout << myMaxInt (a, b) << '\n';
    cout << myMax (a, b) << '\n';
    add (10.13, 20);
    return 0;
}
