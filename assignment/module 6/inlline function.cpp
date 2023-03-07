#include <iostream>
using namespace std;
inline int multiply(int a, int b)
{
    return a * b;
}

inline int cube(int a)
{
    return a * a * a;
}

int main()
{
    int x = 5, y = 7;
    int product = multiply(x, y);
    int cube_value = cube(x);

    cout<<"multiplication of "<<x<<" and "<< y << "is :"<<product<<endl;
    cout <<"Cube of "<<x<<"is :"<<cube_value<<endl;

    return 0;
}

