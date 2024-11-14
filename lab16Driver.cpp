#include <iostream>
#include "./lab16.cpp"
using namespace std;

static int gcf(int, int);

int main()
{
    static int a, b;

    cout <<" Enter two integer values you want to find the GCF of: ";
    cin >> a >> b;
    cout << "The greatest common factor of " << a  <<" and " << b << " is " << gcf(a,b)<< endl;
}