/* ----------------------------- */
/* Perulangan FOR dengan break; */
/* ----------------------------- */
#include <iostream>

using namespace std;

int main() {
  int a = 3, b = 2, c = 1, bil;
  system("clear");
  cout << "Bil-A | Bil-B | Bil-C\n";
  cout << "-------------------------";
  for (bil = 1; bil <= 10; ++bil) {
    a += b;
    b += c;
    c += 2;
    cout << "\t\n" <<a<<b<<c<< endl;
    if (c == 13) {
      break;
    }
  }
  getchar();
}  