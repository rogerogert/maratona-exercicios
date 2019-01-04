#include <iostream> // cin e cout

using namespace std;

int main(){

  int cino;
  int bino;

 string impar = "Cino";
 string par = "Bino";

  cin >> cino;
  cin >> bino;

  if((cino + bino) % 2 == 0){
        cout << par << "\n";
  } else {
      cout << impar << "\n";
  }

  return 0;
}