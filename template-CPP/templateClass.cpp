#include <bits/stdc++.h>
using namespace std;
//template class for stack
template <class T> class myStack 
{
    private:
    T *s;
    int top;
    int size;
    public:
    myStack (int size) 
    {
        this->size = size;
        top = -1;
        s = new T[size];
    }
    void push (T value);
    T pop ();
    void display ();
};
template <class T> void myStack <T> :: push (T value)
{
    if (top == size - 1) cout << "stack overflow!" << '\n';
    else {
        top++;
        s[top] = value;
    }
}
template <class T> T myStack <T> :: pop ()
{
    T x = -1;
    if (top == -1) cout << "stack is empty!" << '\n';
    else {
        x = s[top];
        top--;
    }
    return x;
}
template <class T> void myStack <T> :: display ()
{
    if (top == -1) cout << "stack is empty!" << '\n';
    else {
        cout << "Elements inside stack are: " << '\n';
        for (int i = top; i >= 0; i--) {
            cout << s[i] << ' ';
        }
        cout << '\n';
    }
}
int main ()
{
    myStack <float> st (5);
    st.push (10.2);
    st.push (11.2);
    st.push (12.2);
    st.push (13.2);
    st.push (14.2);
    cout << st.pop () << '\n';
    st.display ();
    return 0;
}
