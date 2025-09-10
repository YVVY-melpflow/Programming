#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void PrintNum(int Nin, int Kin) {
  if (Nin == 1) {
    cout << Kin / 2 << " " << (Kin / 2) + (Kin % 2);
  } else {
    PrintNum(Nin - 1, Kin / 2);
    cout << " ";
    PrintNum(Nin - 1, (Kin / 2) + (Kin % 2));
  }
}

int main(void) {
  int Nin, Kin;
  int tmp;

  cin >> Nin >> Kin;

  int Xout = 0;
  tmp = Kin;
  for (int i = 0; i < Nin; i++) {
    Xout = max(Xout, tmp % 2);
    tmp /= 2;
  }
  cout << Xout << endl;
  PrintNum(Nin, Kin);
  cout << endl;
}
