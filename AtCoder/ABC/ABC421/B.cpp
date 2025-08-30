#include <iostream>
#include <string>
using namespace std;

long rev(long numIn) {
  int digitNum[20];

  int digit = 0;
  while (numIn != 0) {
    digitNum[digit] = numIn % 10;
    digit++;
    numIn /= 10;
  }

  long answer = 0;
  for (int i = 0; i < digit; i++) {
    answer *= 10;
    answer += digitNum[i];
  }

  return answer;
}

int main(void) {
  long Xin, Yin;
  cin >> Xin >> Yin;

  long Atmp1, Atmp2, answer;
  Atmp1 = Xin;
  Atmp2 = Yin;
  for (int i = 0; i < 8; i++) {
    answer = rev(Atmp1 + Atmp2);
    Atmp1 = Atmp2;
    Atmp2 = answer;
  }
  cout << answer << endl;
}
