#include <iostream>
using namespace std;
#include <memory>
class Rectangle
{
    int length;
    int breadth;
    public:
        Rectangle(int l, int b)
        {
            length = l;
            breadth = b;
        }
        int area()
        {
            return length*breadth;
        }
};
auto printHello = [](){cout <<"hello"<< endl;};
auto add = [](int a, int b){return a+b;};
int main()
{
    unique_ptr<Rectangle> P1(new Rectangle(10, 5));
    cout << P1->area() << endl;
    unique_ptr<Rectangle> P2;
    P2 = move(P1);
    cout << P2->area() << endl;
    printHello();
    int c = add(4, 7);
    cout << c << endl;
    return 0;
}