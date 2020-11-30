#include <iostream>
using namespace std;

int main() {
 cout << !((true && true) || (false && true)) || (!true || (!false && true));
}