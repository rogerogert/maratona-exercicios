#include <iostream> // cin e cout

using namespace std;

int main(){

  int num;
  cin >> num;


  if(num == 0){
        cout << "nulo" << "\n";
  } else if(num < 0) {
      cout << "negativo" << "\n";
  } else {
      cout << "positivo" << "\n";
  }

  return 0;
}