#include "std_lib_facilities.h"

int main()
{
int a = 7;
int b = 1;
cout<<"Jelenleg : a:"<< a << " " "b:" << b << endl;

b = a * b;
a = b / a;
b = b / a;
cout<<"Utánna : a:"<< a << " " "b:" << b << endl;
}
