#include <iostream>
using namespace std;

class nokta {
public:
  int x, y;

  nokta(){};
  nokta(int a, int b) {
    x = a;
    y = b;
  }

  nokta operator +(nokta &bir) {
    nokta a;
    a.x = x + bir.x;
    a.y = y + bir.y;
    return a;
  }

  nokta operator+(int c) {
    x = x + c;
    y = y + c;
    return *this;
  }

  bool operator>(nokta &object) {
    if (x > object.x && y > object.y)
    {
      return true;
    }
    return false;
  }

  void yaz() { cout << " " << y; }
};

int main() {
  nokta x(1, 5), y(8, 4),z(1,5);
  x = x + y;
  /*x.yaz();
  x = x + 8;
  x.yaz();
  z=y+z+5;
  z.yaz();*/
  if (x>y)
  {
    cout << "x>y";
  }
  

  return 0;
}