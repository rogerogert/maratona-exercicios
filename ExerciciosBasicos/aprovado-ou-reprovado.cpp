 #include <iostream>

using namespace std;

int main(){

  double a;
  double b;
  cin >> a;
  cin >> b;

  double media = (a+b)/2;


  if(media >= 7.0){
        cout << "Aprovado" << "\n";
  } else if(media >= 4.0) {
      cout << "Recuperacao" << "\n";
  } else {
      cout << "Reprovado" << "\n";
  }

  return 0;
}