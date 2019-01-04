#include <iostream>
using namespace std;

int main(){

  int alunos;
  int monitores;
  int capacidade = 50;
  string podeLevar = "N";

  cin >> alunos;
  cin >> monitores;

  int soma = alunos + monitores;

  if(soma <= capacidade){f
      podeLevar = "S";
  }

  cout << podeLevar << "\n";
  
  return 0;
}