#include <iostream>

using namespace std;

int main(){

    int opc;
    const int fila = 5;
    const int columna = 1;

    int matriz[fila][columna];

    for(int i=0; i<fila; i++){
        for(int j=0; j<=columna; j++){
            cout<<"Ingresar valor para ["<<i<<"]["<<j<<"]:";
            cin>>matriz[i][j];
        }
    }

    cout<<"\tMENU"<<endl;

    do{
        for(int i=0; i<fila; i++){
            for(int j=0; j<columna; j++){
                cout<<i+1<<". Bicicleta marca "<<matriz[i][j]<<". Precio: "<<matriz[i][1];
                cout<<endl;
            }
        }
        cout<<"Ingresar opcion: "; cin>>opc;

    switch(opc){

        case 1: cout<<"Bicicleta roja disponible";
            break;
        case 2: cout<<"Bicicleta amarilla disponible";
            break;
        case 3: cout<<"Bicicleta azul disponible";
            break;
        case 4: cout<<"Bicicleta verde disponible";
            break;
        case 5: cout<<"Bicicleta violeta disponible";

        }

        cout<<"\n1. Volver al menu";
        cout<<"\n0. Comprar bicicleta"<<endl;
        cin>>opc;

    }while(opc != 0);

    cout<<"\nCompra exitosa!";
    cout<<endl;

    return 0;
}
