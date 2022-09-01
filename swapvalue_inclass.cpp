#include <iostream>
using namespace std;
class Y;
class X
{
    int data;
    friend void exchange(X &, Y &);

public:
    void getdata(int b)
    {
        data = b;
    }
    void display(void)
    {
        cout << "number is " << data << endl;
    }
};
class Y
{
    int info;
    friend void exchange(X &, Y &);

public:
    void getdata(int a)
    {
        info = a;
    }
    void display(void)
    {
        cout << "number is " << info << endl;
    }
};

void exchange(X &a1, Y &a2)
{
    int tmp = a1.data;
    a1.data = a2.info;
    a2.info = tmp;
}

int main()
{
    X ravi;
    Y mohan;
    ravi.getdata(5);
    ravi.display();
    mohan.getdata(6);
    mohan.display();
    exchange(ravi, mohan);
    cout << "exchanged ";
    ravi.display();
    cout << "exchanged ";

    mohan.display();

    return 0;
}