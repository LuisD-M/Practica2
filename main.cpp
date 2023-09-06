#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


void problema2();
bool problema3();
int problema4(int cadena4[], int tama);
void problema5(int numero, string &cadena);
char problema6(char cadena6[], int tama);




int potencia(int a);



int potencia(int expo);

int main(){

    int opcion=1, tama4, numero, tama6;
    int cadena4[] = {1,2,3,4,5};
    char cadena6[] = {'M','a','n','-','s','a','N','a'};
    string cadena;


    while(opcion != 0){
        cout<<"************* Menu Practica #1 **************"<<endl;
        cout <<"Ingrese el numero del problema que desea de los 17 problemas que se tiene. "<<endl;
        cout<<"Ingrese cero para salir."<<endl;
        cin>> opcion;
        cout<<endl;



        switch(opcion){
        case 0:
            cout<<endl;
            break;

        case 1:
            cout<<"Problema #1."<<endl;

            cout<<endl;
            break;

        case 2:
            cout<<"Problema #2."<<endl;
            problema2();
            cout<<endl;
            break;

        case 3:
            cout<<"Problema #3."<<endl;
            problema3();
            cout<<endl;
            break;

        case 4:
            cout<<"Problema #4."<<endl;
            tama4=sizeof(cadena4)/sizeof(cadena4[0]);
            cout<<problema4(cadena4,tama4)<<endl;

            break;

        case 5:
            cout<<"Problema #5."<<endl;
            numero = 2436;
            problema5(numero,cadena);
            cout<<endl;
            break;

        case 6:
            cout<<"Problema #6."<<endl;
            tama6=sizeof(cadena6)/sizeof(cadena6[0]);
            problema6(cadena6, tama6);
            cout<<endl;
            break;

        case 7:
            cout<<"Problema #7."<<endl;

            cout<<endl;
            break;

        case 8:
            cout<<"Problema #8."<<endl;

            cout<<endl;
            break;

        case 9:
            cout<<"Problema #9."<<endl;

            cout<<endl;
            break;

        case 10:
            cout<<"Problema #10."<<endl;

            cout<<endl;
            break;

        case 11:
            cout<<"Problema #11."<<endl;

            cout<<endl;
            break;

        case 12:
            cout<<"Problema #12."<<endl;

            cout<<endl;
            break;

        case 13:
            cout<<"Problema #13."<<endl;

            cout<<endl;
            break;

        case 14:
            cout<<"Problema #14."<<endl;

            cout<<endl;
            break;

        case 15:
            cout<<"Problema #15."<<endl;

            cout<<endl;
            break;

        case 16:
            cout<<"Problema #16."<<endl;

            cout<<endl;
            break;

        case 17:
            cout<<"Problema #17."<<endl;

            cout<<endl;
            break;

        default:
            cout<<"Se ingreso un valor invalido."<<endl;
            cout<<endl;
            break;

        }   // LLave del switch case.
    } //Llave del while grande.
    cout<<"El programa a finalizado."<<endl;
    return 0;   }




void problema2(){
    char letras[100];
    int cont=0;

    for(int i=0; i<100; i++){
        letras[i] = (char)(65 + rand() %26); }             // genera numeros aleatorios y se concatena a su caracter en ascii rango 65-90

    for(int i=65; i<91;i++){                               // analiza los numeros 65-90 correspondientes en ascii a A-Z
        for(int j=0; j<100; j++){                          //recorre la lista generada
            if(i==(int)letras[j]) cont++; }                //cuenta las repeticiones de cada letra

        cout<<(char)i<<":"<<cont<<endl;
        cont=0;
    }
}

bool problema3(){
    char cad1[] = {'e', 'a', 'g', '5'}, cad2[] = {'e', 'a', 'g', '5'};
    int tam1, tam2, cont=0;
    bool si = true, no = false;

    tam1 = sizeof(cad1)/sizeof(cad1[0]);                      //se calcula el tamaño de la cadena
    tam2 = sizeof(cad2)/sizeof(cad2[0]);

    if(tam1 == tam2){
        for(int i=0; i<tam1; i++){                           //Se analiza cada cadena en la misma posicion
            if(cad1[i] == cad2[i]) cont++; }

        if(cont==tam1){                                     //Compara las similitudes con el tamaño de la cadena.
            cout<<"Las cadenas son iguales"<<endl;  }

        else cout<<"Las cadenas son diferentes"<<endl;
    }
    else{
        cout<<"Las longitudes de las listas son diferentes"<<endl;
        return no; }

}

int problema4(int cadena4[], int tama){
    int  y, suma=0;

    y=tama-1;                                             // potencias, - 1 por que empieza en 10
    for(int i=0; i<tama; i++){                           // analiza los datos de la cadena
        suma += cadena4[i]*potencia(y);                 // multiplica el dato por la potencia y calcula el valor total
        y--;
    }
    return suma;
}

void problema5(int numero, string &cadena){
    cadena = to_string(numero);
    cout<<cadena<<endl;
}

char problema6(char cadena6[], int tama){

    cout<<"Original: ";
    for(int i=0; i<tama; i++)
        cout<<cadena6[i];

    for(int i=0; i<tama; i++){
        if((int)cadena6[i]>96 && cadena6[i]<123)
            cadena6[i] = (char)((int)cadena6[i] - 32);  }

    cout<<endl;

    cout<<"En mayuscula: ";
    for(int i=0; i<tama; i++)
        cout<<cadena6[i];

    cout<<endl;
}


int potencia(int a){
    int p=1;
    for(int i=1; i<=a; i++)       //calcula 10 elevado al numero que le entre
        p = p*10;

    return p;
}















