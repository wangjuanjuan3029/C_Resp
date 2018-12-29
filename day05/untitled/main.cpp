#include <QCoreApplication>
#include <iostream>

using namespace std;
int test(int &a,int &sum)
{
    sum += a;
    return *sum;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int c = test(1,2);
    cout<<*c;
    return a.exec();
}
