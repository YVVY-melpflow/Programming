#include <iostream>
#include <string>
using namespace std;

int main(void) {
  int Hin, Win;
  int Area[20][20];
  string Sin;

  cin >> Hin >> Win;
  for (int i = 0; i < Hin; i++) {
    cin >> Sin;
    for (int j = 0; j < Win; j++) {
      if (Sin[j] == '.') {
        Area[i][j] = 0;
      } else {
        Area[i][j] = 1;
      }
    }
  }
  
  for (int i = 0; i < Hin; i++) {
    for (int j = 0; j < Win; j++) {
      if (Area[i][j]) {
        int count = 0;
        if (i != 0       && Area[i - 1][j]) {
          count++;
        }
        if (i != Hin - 1 && Area[i + 1][j]) {
          count++;
        }
        if (j != 0       && Area[i][j - 1]) {
          count++;
        }
        if (j != Win - 1 && Area[i][j + 1]) {
          count++;
        }
        if (count != 2 && count != 4) {
          cout << "No" << endl;
          return 0;
        } 
      }
    }
  }

  cout << "Yes" << endl;
}
