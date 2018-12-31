#include <iostream>
using namespace std;

int n;
double s[100009];

void le_entrada(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> s[i];
    }
}


void selection_sort(){
    for(int i=1;i<=n;i++){
        int menorPos = i;
        for(int j=i;j<=n;j++){
            if(s[j] < s[menorPos]){
                menorPos = j;
            }
        }
        swap(s[menorPos], s[i]);
    }
}

int main(){
    le_entrada();
    selection_sort();

    for(int i=1;i<=n;i++){
        cout << s[i] << " ";
    }
    cout << endl;
}