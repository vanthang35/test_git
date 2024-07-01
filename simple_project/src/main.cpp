#include <iostream>
#include <math_func.h>
 
using namespace std;
int main()
{
    int a = 5;
    int b = 8;
    math_equation sol;
    cout<< "phep tong" << sol.add(a, b) << endl;
    cout << "phep nhan" << sol.multi(a, b)<< endl;
    return 0;
}