#include <iostream>

using namespace std;

int main() {
  int a, b, hasil=79;

  for (a = 1; a <= 19; a += 2) {
    cout << a;
    if (a < 19) {
      cout << " + ";
    }
  }
  cout << " = ";
  hasil = hasil + a;
  cout << hasil;
  getchar();
}