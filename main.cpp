#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;

void problema1();
void problema2();
bool problema3();
int problema4(char cadena4[], int tama);
void problema5(int *num5, char *vec5);
char problema6(char cadena6[], int tama);
void problema7(char *vec7);
void problema8();
void problema9();
void problema10();
void problema11();



int potencia(int a);



int potencia(int expo);

int main(){

    int opcion=1, tama4, num5, tama6;
    char cadena4[] = {'0','8','3','4','5'};
    char vec5[15] = {};
    char cadena6[] = {'M','a','n','-','s','a','N','a'};
    char vec7[] = {'m','a','m','a','l','l','i','n','i','s'};



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
            problema1();
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
            cout<<"Ingrese un numero: "; cin>>num5;
            problema5(&num5, &vec5[0]);
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
            problema7(&vec7[0]);
            cout<<endl;
            break;

        case 8:
            cout<<"Problema #8."<<endl;
            problema8();
            cout<<endl;
            break;

        case 9:
            cout<<"Problema #9."<<endl;
            problema9();
            cout<<endl;
            break;

        case 10:
            cout<<"Problema #10."<<endl;
            problema10();
            cout<<endl;
            break;

        case 11:
            cout<<"Problema #11."<<endl;
            problema11();
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


void problema1(){
    int billetes[10]={50000,20000,10000,5000,2000,1000,500,200,100,50};
    int plata;
    cout<<"Ingrese el numero de plata: "; cin>>plata;

    for(int i=0; i<10; i++){
        if((plata/billetes[i])>0){
            cout<<billetes[i]<<":"<<plata/billetes[i]<<endl;
            plata = plata - billetes[i]*(plata/billetes[i]);

        }
        else cout<<billetes[i]<<":"<<0<<endl;
    }

    cout<<"Faltante:"<<plata<<endl;
}

void problema2(){
    char letras[200];
    int cont=0;

    for(int i=0; i<200; i++){
        letras[i] = (char)(65 + rand() %26); }             // genera numeros aleatorios y se concatena a su caracter en ascii rango 65-90

    for(int i=65; i<91;i++){                               // analiza los numeros 65-90 correspondientes en ascii a A-Z
        for(int j=0; j<200; j++){                          //recorre la lista generada
            if(i==(int)letras[j]) cont++; }                //cuenta las repeticiones de cada letra

        cout<<(char)i<<":"<<cont<<endl;
        cont=0;
    }
}

bool problema3(){
    char cad1[] = {'e', 'a', 'g', '5'}, cad2[] = {'e', 'a', 'g', '5'};
    int tam1, tam2, cont=0;
    bool igualdad=true;

    tam1 = sizeof(cad1)/sizeof(cad1[0]);                      //se calcula el tamaño de la cadena
    tam2 = sizeof(cad2)/sizeof(cad2[0]);

    if(tam1 == tam2){
        for(int i=0; i<tam1; i++){                           //Se analiza cada cadena en la misma posicion
            if(cad1[i] == cad2[i]) cont++; }

        if(cont==tam1){                                     //Compara las similitudes con el tamaño de la cadena.
            igualdad = true;
            cout<<igualdad<<endl;    }

        else {
            igualdad = false;
            cout<<igualdad<<endl;    }
    }
    else{
        igualdad = false;
        cout<<igualdad<<endl;    }

    return igualdad;
}

int problema4(char cadena4[], int tama){
    int  y, suma=0;

    y=tama-1;                                             // potencias, - 1 por que empieza en 10
    for(int i=0; i<tama; i++){                            // analiza los datos de la cadena
        suma += ((int)cadena4[i]-48)*potencia(y);         // multiplica el dato por la potencia y calcula el valor total
        y--;
    }
    return suma;
}

void problema5(int *num5, char *vec5){
    int cifras=0, aux;
    aux=*num5;

    while(*num5 != 0){                                           //Cuenta numero de cifras del numero
        *num5/=10;
        cifras++;}

    for(int i=0; i<cifras; i++){                                 //Ciclo para llenar el vector en char
        vec5[cifras-1 -i] = (char)(aux%10 + 48);                 //llena el vector de la pisicion final a inicial
        aux/=10;                                                 //Se castea el valor de acuerdo a la tabla ascii
    }

    cout<<"La cadena es: ";
    for(int i=0; i<cifras; i++) cout<<vec5[i];                  //Se imprime
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

void problema7(char *vec7){
    //int tamaño = sizeof(vec7)/sizeof(vec7[0]);

    cout<<"Original: ";
    for(int i=0; i<10; i++) cout<<vec7[i];
    cout<<endl;

    cout<<"Sin repetidos: ";
    for(int i=0; i<10; i++){                                //Primer elementos a analizar
        for(int j=i+1; j<10;j++){                           //Se analizar con los siguientes en el arreglo
            if(vec7[i]==vec7[j]) vec7[j]=NULL;   }          //Si encuentra repetidos borra uno con el caracter nulo
    }
    for(int i=0; i<10; i++) cout<<vec7[i];
}

void problema8(){
    char cadena[10] = {'L','2','3','u','5','6','8','8','i','s'};
    char cadena1[10];
    int contador=0;

    cout<<"Original: ";
    for(int i=0; i<10; i++) cout<<cadena[i];

    for(int i=0; i<10; i++){
        if((int)cadena[i]>47 && (int)cadena[i]<58 ){          //Analisa si el caracter es un numero en la tabla ascii
            cadena1[contador] = cadena[i];                    // agrega el numero a la nueva cadena en la posicion de contador
            contador++;                                       // contador ayuda a ir en posiciones consecutivas y a saber cuantos datos son
            cadena[i] =NULL;    }
    }
    cout<<endl;
    cout<<"Texto: ";
    for(int i=0; i<10; i++) cout<<cadena[i];

    cout<<". "<<"Numero: ";
    for(int i=0; i<contador; i++) cout<<cadena1[i];




}

void problema9(){
    int tamaño=17, n, contador=0, suma=0, aux=0;
    char numeros[tamaño] = {'1','0','0','9','4','5','8','7','3','9','0','1','6','3','8','6','2'};
    cout<<"Ingrese un numero n: "; cin>>n;


    cout<<"Original: ";
    for(int i=0; i<tamaño; i++) cout<<numeros[i];
    cout<<endl;

    cout<<"Numero de cifras: "<<n<<endl;

    for(int i=tamaño-1; i>=0; i--){                           //Recorre el arreglo del ultimo al primero
        suma += ((int)numeros[i] - 48)*potencia(aux);         //Realiza la suma con el casteo pa pasar a entero y la potencia
        aux++;                                                // de acuerdo al numero de cifra que sea
        contador++;

        if(contador==n){                                     //Si se llega al limite de cifras, se reinicia la potencia.
            aux=0;
            contador=0; }
    }

    cout<<"La suma es: "<<suma<<endl;

}

void problema10(){
    int tam = 2, suma=0;
    char numero[tam] ={'C','D'};

    cout<<"El numero ingresado es: ";
    for(int i=0; i<tam; i++) cout<<numero[i];
    cout<<endl;

    map<char,int> diccionario ={
        {'M',1000},
        {'D',500},
        {'C',100},
        {'L',50},
        {'X',10},
        {'V',5},
        {'I',1}
    };

    suma=diccionario[numero[0]];
    for(int i=0; i<tam; i++){
        if(diccionario[numero[i]]>= diccionario[numero[i+1]] )
            suma += diccionario[numero[i+1]];
        else
            suma -= diccionario[numero[i+1]];

    }

    if(suma>0) cout<<"El numero corresponde a: "<<suma<<endl;
    else cout<<"El numero corresponde a: "<<suma*-1<<endl;











}

void problema11(){







}

int potencia(int a){
    int p=1;
    for(int i=1; i<=a; i++)       //calcula 10 elevado al numero que le entre
        p = p*10;

    return p;
}















