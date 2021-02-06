#include <bits/stdc++.h>
using namespace std;
//generic template for searching an element in a container
template <typename T> int search (T arr[], int n, T elementToSearch) {
    for (int pos = 0; pos < n; pos++) {
        if (arr[pos] == elementToSearch) {
            return pos;
        }
    }
    return -1;
}
void firstMethod () 
{
    int arrInt[10], x;
    cout << "Enter any 10 elements inside the array!" << '\n';
    for (int i = 0; i < 10; i++)
    {
        cin >> arrInt[i];
    }
    cout << "Enter element you want to search!" << '\n';
    cin >> x;
    //function template
    //works for any type of array and elements
    //template search
    cout << search (arrInt, 10, x) << '\n';
}

class compareInt {
    public:
    bool operator () (int a, int b) { return a == b ? true : false; }
};

//template class
template <typename T> class compareAny 
{
    public:
    bool operator () (T a, T b) { return a == b ? true : false; }
};
//function template
template <typename T, typename Compare>
int Search (T arr[], int n, T elementToSearch, Compare obj) {
    //compare is a class that has () operator overloaded
    for (int pos = 0; pos < n; pos++) {
        if (obj (arr[pos], elementToSearch) == true) {
            //obj compares the elements of type T
            return pos;
        }
    }
    return -1;
}
 
void secondMethod ()
{
    //the above function firstMethod will not work for
    //types that are not primitive like books
    //as computer won't be able to compare two books
    //in that case we use a concept called comparator
    int myArr[10], b;
    cout << "Enter any 10 elements inside the array!" << '\n';
    for (auto& x : myArr) { cin >> x; }
    cout << "Enter the element you want to search!" << '\n';
    cin >> b;

    //To use the search function for integers, we can write 
    //defining a class compare
    //calling search templated function
    compareInt obj;
    //obj is the object of class compareInt
    Search (myArr, 10, b, obj);
    //T is replaced with int
    //Compare replaced with compareInt
    
    //now to use the same search function for double
    //we need a template class for compare obj
    //to compare two values of same primitive type
    double A[10], element;
    cout << "Enter any 10 double elements inside the array!" << '\n';
    for (auto& x : A) { cin >> x; }
    cout << "Enter the element you want to search!" << '\n';
    cin >> element;
    compareAny <double> Obj;
    cout << Search (A, 10, element, Obj) << '\n';
}
int main ()
{
    firstMethod ();
    secondMethod ();
    return 0;
}