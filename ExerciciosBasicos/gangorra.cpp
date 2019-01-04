#include <iostream>
using namespace std;

int main(){

  int p1, c1, p2, c2;
  cin >> p1 >> c1 >> p2 >> c2;

  int cp1 = p1*c1;
  int cp2 = p2*c2;
  int eq = 1;

  if(cp1 == cp2){
      eq = 0;
  }

  if(cp1 > cp2){
      eq = -1;
  }

  cout << eq << "\n";
  
  return 0;
}