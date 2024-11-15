// Code to implement the gcf function goes here
#include <iostream>
using namespace std;

static int gcf(int a, int b) {

    if (a == 0) {
        return b;
    }
    if (b == 0) {
        return a;
    }
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
        return gcf(a,b);
    }
    return a;
}