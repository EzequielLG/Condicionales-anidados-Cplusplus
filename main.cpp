// Autor: LozanoSoft

#include <iostream>

using namespace std;

int main(){

  // Condicionales anidados

  int num_1 = 9;
  int num_2 = 20;
  float num_3 = 30.01;

  if(num_1 < 10 || num_2 == 20){

    if(num_1 < 10 && num_2 == 20){

      cout << "La variable 'num_1' es menor a 10 y la variable 'num_2' es igual a 20'" << endl;

      if(num_3 > 30){
        cout << "Además, la variable 'num_3' es mayor a 30" << endl;
      }
      else{
        cout << "Además, la variable 'num_3' no es mayor a 30" << endl;
      }

    }
    else{
      // Pueden haber más else if o ejecutar la instrucción deseada
      cout << "La variable 'num_1' no es menor a 10 o la variable 'num_2' no es igual a 20'" << endl;
    }

  }
  else{
    cout << "La variable 'num_1' no es menor a 10 y la variable 'num_2' no es igual a 20'" << endl;
  }

  // TIP

  if(num_3 > 30){

    if(num_2 < 25){

      if(num_1 > 8.8){
        cout << "1_Cumple las condiciones" << endl;
      }

    }

  }

  if(num_3 > 30 && num_2 < 25 && num_1 > 8.8){
    cout << "2_Cumple las condiciones" << endl;
  }

  return 0;

}
