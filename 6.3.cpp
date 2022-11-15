#include <iostream>

using namespace std;

int main() {
  int a, hasil = 88;

  for (a = 2; a <= 20; a += 2) {
    cout << a;
    if (a < 20) {
      cout << " + ";
    }
  }

  a = a + hasil;
  cout << " = " << a;

  getchar();
}