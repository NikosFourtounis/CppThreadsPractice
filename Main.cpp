#include <iostream>
using namespace std;
void myswap(int & a, int & b) {
 int temp = b;
 b = a;
 a = temp;
 cout << "int swap done\n";
}
void myswap(float & a, float & b) {
 float temp = b;
 b = a;
 a = temp;
 cout << "float swap done\n";
}
void myswap(double & a, double & b) {
 double temp = b;
 b = a;
 a = temp;
 cout << "double swap done\n";
}
int main() {
 int a, b;
 a = 3;
 b = 6;
 myswap(a, b);
 cout << "a = " << a << " b = " <<b <<"\n";
 float c, d;
 c = 3.14;
 d = 9.36;
 myswap(c, d);
 cout << "c = " << c << " d = " <<d<<"\n";
 double e, f;
 e = c;
 f = d;
 myswap(e, f);
 cout << "e = " << e << " f = " <<f<<"\n";
}
