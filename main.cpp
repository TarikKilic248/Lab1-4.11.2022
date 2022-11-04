#include <iostream>
using namespace std;

class sayi {
public:
  int a[10];
  static int sta;
  sayi &ekle(int value, int index) {
    a[index] = value;
    return *this;
  }

  void yaz() {
    for (int i = 0; i < 10; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  }
};

int sayi::sta;

int main() { // x = 359
  sayi x;
  sayi y;
  x.ekle(3, 0).ekle(5, 1).ekle(9, 2);
  x.yaz();

  cout << "x " << x.sta << endl;

  x.sta = 18;

  cout << "x " << x.sta << endl;
  cout << "y " << y.sta << endl;

  y.sta = 122;

  cout << "x " << x.sta << endl;
  cout << "y " << y.sta << endl;
  return 0;
}
