#include <iostream>
using namespace std;

int main(void) {
  int Xin, Yin;
  cin >> Xin >> Yin;
  
  int temp = Xin + Yin;
  if (temp > 12) {
    cout << temp - 12 << endl;
  } else {
    cout << temp << endl;
  }
}
