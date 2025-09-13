#include <iostream>
#include <string>
using namespace std;

int main(void) {
  int Hin, Min;

  cin >> Hin >> Min;

  for (int i = 0; i < 24*60; i++) {
    int SwapH = (Hin / 10) * 10 + Min / 10;
    int SwapM = (Hin % 10) * 10 + Min % 10;
    if (SwapH < 24 && SwapM < 60) {
      break;
    }
    Min++;
    if (Min == 60) {
      Hin++;
      Min = 0;
    }
    if (Hin == 24) {
      Hin = 0;
    }
  }
  cout << Hin << " " << Min << endl;
}
