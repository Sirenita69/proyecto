#include <iostream>

#include <array>



using namespace std;



const int MAX = 10;



int main(){

    double notas;

    int cant_aprobados = 0,sobresalientes = 0;

    

    typedef double tArray[MAX];

    tArray alumnos;



    cout << "introduce las notas de los alumnos";

    for(int i = 0; i<MAX;i++){

        cin >> notas;

        alumnos[i] = notas;

    }

    

    for (int i = 0; i < MAX; i++) {

        if (alumnos[i] >= 9) {

            sobresalientes++;

        }

        else {

        }

        if (alumnos[i] >= 5) {



            cant_aprobados++;

        }

    }

    //----------------------------------------------------------------------------------

    int nota_mas_alta=0, segunda_nota_mas_alta=0;

    

    for (int i = 0; i < MAX; i++) {

        if (alumnos[i] >= nota_mas_alta) {

           segunda_nota_mas_alta = nota_mas_alta;

           nota_mas_alta = alumnos[i];

        }

    }

    //----------------------------------------------------------------------------------

    tArray distintos;

    for (int i = 0; i < MAX; i++) {

        distintos[i] = -1;

    }

    for (int i = 0; i < MAX; i++) {

        int iguales=0;

        for (int j = 0; j < MAX; j++) {

            if (alumnos[i] == alumnos[j]) {

                iguales++;

                distintos[i] = iguales;

            }

            

        }cout << endl << distintos[i] << endl;



    }

    double suma2 = 0,suma3=0,suma4=0,suma5=0,suma6=0,suma7=0,suma8=0,suma9=0,suma10=0;

    double suma=0;



    for (int i = 0; i < MAX; i++) {

        if (distintos[i] == 1) {

            suma++;

        }

        else if (distintos[i] == 2) {

            suma2++;

        }

        else if (distintos[i] == 3) {

            suma3++;

        }

        if (distintos[i] == 4) {

            suma4++;

        }

        else if (distintos[i] == 5) {

            suma5++;

        }

        if (distintos[i] == 6) {

            suma6++;

        }

        else if (distintos[i] == 7) {

            suma7++;

        }

        if (distintos[i] == 8) {

            suma8++;

        }

        else if (distintos[i] == 9) {

            suma9++;

        }

        if (distintos[i] == 10) {

            suma10++;

        }

    }

    suma2 /= 2;

    suma3 /= 3;

    suma4 /= 4;

    suma5 /= 5;

    suma6 /= 6;

    suma7 /= 7;

    suma8 /= 8;

    suma9 /= 9;

    suma10 /= 10;

    

    suma = suma + suma2 + suma3 + suma4 + suma5 + suma6 + suma7 + suma8 + suma9 + suma10;

    

    

    

    cout << "cantidad de aprobados: " << cant_aprobados << endl;

    cout << "cantidad de sobresalientas " << sobresalientes << endl;

    cout << "notas mas altas " << nota_mas_alta << " " << segunda_nota_mas_alta << endl;

    cout << "numero de notas distintas: " << suma << endl;

    return 0;

}