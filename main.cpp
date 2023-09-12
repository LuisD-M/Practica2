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
void problema12();
int problema13(int **matriz13, int m13[6][8]);
void problema14();
void problema15(int vector15a[], int vector15b[], int *vector15c);
void problema16(int fil, int col, int n, int *total);
void problema17();
void problema18();



int potencia(int a);
void imprimir(char (&matriz)[15][20]);
void menu();
int compdiferentes(int n, int vector[]);
int compiguales(int n, int vector[]);
void immatriz(int matriz[5][5]);
int factorial(int a);



int main(){

    int opcion=1, tama4, num5, tama6, n16, total16=0;
    char cadena4[] = {'0','8','3','4','5'};
    char vec5[15] = {};
    char cadena6[] = {'M','a','n','-','s','a','N','a'};
    char vec7[] = {'m','a','m','a','l','l','i','n','i','s'};
    int m13[6][8]= {{0,3,4,0,0,0,6,8},
                    {5,13,6,0,0,0,2,3},
                    {2,6,2,7,3,0,10,0},
                    {0,0,4,15,4,1,6,0},
                    {0,0,7,12,6,9,10,4},
                    {5,0,6,10,6,4,8,0}};

    int **matriz13 = new int*[6];                       //Se reserva la matriz de 6X8 en memoria dinamica para el problema13;
    for(int i=0; i<6; i++) matriz13[i] = new int[8];

    int vector15a[4]={6,0,9,2};
    int vector15b[4]={0,0,6,3};
    int vector15c[4]={0};





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
            problema12();
            cout<<endl;
            break;

        case 13:
            cout<<"Problema #13."<<endl;
            cout<<"El numero de estrellas encontradas en la imagen es: "<<problema13(matriz13, m13)<<endl;
            cout<<endl;
            break;

        case 14:
            cout<<"Problema #14."<<endl;
            problema14();
            cout<<endl;
            break;

        case 15:
            cout<<"Problema #15."<<endl;

            problema15(vector15a, vector15b, &vector15c[0]);
            cout<<"La interseccion de los dos rectangulos es: "<<endl;
            for(int i=0; i<4; i++) cout<<vector15c[i]<<" ";

            cout<<endl;
            cout<<endl;
            break;

        case 16:
            cout<<"Problema #16."<<endl;
            cout<<"Ingrese un numero:"; cin>>n16;
            n16 +=1;
            problema16(0, 0, n16, &total16);
            cout<<"Para una malla de "<<n16-1<<"X"<<n16-1<<" hay "<<total16<<" caminos."<<endl;
            cout<<endl;
            total16=0;
            break;

        case 17:
            cout<<"Problema #17."<<endl;
            problema17();
            cout<<endl;
            break;

        case 18:
            cout<<"Problema #17."<<endl;
            problema18();
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
    char cad1[] = {'e', 'a', 'a', '5'}, cad2[] = {'e', 'a', 'g', '5'};
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
        vec5[cifras-1 -i] = (char)(aux%10 + 48);                 //llena el vector de la p0sicion final a inicial
        aux/=10;                                                 //Se castea el valor de acuerdo a la tabla ascii
    }

    cout<<"La cadena es: ";
    for(int i=0; i<cifras; i++) cout<<vec5[i];                  //Se imprime
}

char problema6(char cadena6[], int tama){

    cout<<"Original: ";                                                     //Imprime la cadena original
    for(int i=0; i<tama; i++)
        cout<<cadena6[i];

    for(int i=0; i<tama; i++){
        if((int)cadena6[i]>96 && cadena6[i]<123)
            cadena6[i] = (char)((int)cadena6[i] - 32);  }

    cout<<endl;

    cout<<"En mayuscula: ";                                                //Se imprime la cadena convertida
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
    for(int i=0; i<10; i++){                                //Primer elemento a analizar
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
            cadena[i] = NULL;    }
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
    for(int i=0; i<tam; i++) cout<<numero[i];                          //Imprime numero
    cout<<endl;

    map<char,int> diccionario ={                                       //Se crea un diccionario
        {'M',1000},
        {'D',500},
        {'C',100},
        {'L',50},
        {'X',10},
        {'V',5},
        {'I',1}
    };

    suma=diccionario[numero[0]];                                     //Suma el primer simbolo, para luego sumar el de la segunda
    for(int i=0; i<tam; i++){                                        //Posicion de la comparacion
        if(diccionario[numero[i]]>= diccionario[numero[i+1]] )       // Se realiza las comparaciones de simbolos y se hace operacion
            suma += diccionario[numero[i+1]];
        else
            suma -= diccionario[numero[i+1]];

    }

    if(suma>0) cout<<"El numero corresponde a: "<<suma<<endl;
    else cout<<"El numero corresponde a: "<<suma*-1<<endl;
}

void problema11(){
    int columna;
    char fila, opcion = '1';
    char matriz[15][20];

    for(int i=0; i<15; i++){
        for(int j=0; j<20; j++) matriz[i][j] = '-';                                    //Se llena la matriz
    }

    imprimir(matriz);                                                                  //Funcion imprime la matriz
    cout<<"---------------------------------------------------------------"<<endl;

    while(opcion != '0'){                                                              //Analiza opcion del usuario
        menu();
        cout<<"Ingrese su opcion: "; cin>>opcion;
        opcion = (int)opcion;

        if(opcion== '1'){
            cout<<"Ingrese la letra  de fila a reservar (A-O): "; cin>>fila;
            cout<<"Ingrese el numero de la columna a reservar: "; cin>>columna;
            matriz[(int)(fila-65)][columna] ='+';                                     //Casteo para equivalencia de letra en numero
            imprimir(matriz);                                                         //para buscar la posicion en la matriz
            cout<<"---------------------------------------------------------------"<<endl;
        }

        else if(opcion=='2'){
            cout<<"Ingrese la letra de fila a quitar (A-O): "; cin>>fila;
            cout<<"Ingrese el numero de la columna a quitar: "; cin>>columna;
            matriz[(int)(fila-65)][columna] ='-';
            imprimir(matriz);
            cout<<"---------------------------------------------------------------"<<endl;
        }
    }
    cout<<endl;
    cout<<"El menu de reserva a finalizado--------------------------------"<<endl;
    imprimir(matriz);
    cout<<endl;
}

void problema12(){
    int n, opcion1=0, opcion2=0, opcion3=0, opcion4=1, contador=0, suma=0, di;
    cout<<"Ingrese  n para la matriz nxn: "; cin>>n;

    di=n-1;                                                                   //Variable que ayuda a sumar la diagonal secundaria

    int matriz[n][n];
    int vector[n*n];
    int sumfilas[n];
    int sumcolumnas[n];
    int sumdiagonales[2];

    for(int i=0; i<n; i++){                                                    //Se llena la matriz por el usuario
        for(int j=0; j<n; j++){
            cout<<"Ingrese los datos de la matriz: "; cin>>matriz[i][j];
            vector[contador] = matriz[i][j];                                  //Se llena un vector con los numeros de la matriz
            contador++;}
    }

    cout<<"La matriz es: "<<endl;                                               //Se imprime la matriz
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) cout<<" "<<matriz[i][j];
        cout<<endl;         }

    cout<<endl;

        opcion1 = compdiferentes(n, vector);                                 //Funcion que compara todos los numeros de la matriz

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++) suma += matriz[i][j];                   //Calcula la suma de las filas

            sumfilas[i] = suma;                                            //guardo ls suma en un vector para luego compararlo
            suma=0;
        }
        opcion2=compiguales(n, sumfilas);                                //comparar que las sumas de la filas sean iguales.

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++) suma += matriz[j][i];                   //Calcula la suma de las columnas

            sumcolumnas[i] = suma;                                            //guardo ls suma en un vector para luego compararlo
            suma=0;
        }
        opcion3=compiguales(n, sumcolumnas);                             //comparar que las sumas de las columnas sean iguales.

        if(opcion1==0 && opcion2==0 && opcion3==0){                     //Si se cumplen las anteriores, analiza las diagonales
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(i==j) suma += matriz[i][j];                         //Calcula la suma de la diagonal principal
                }
            }
            sumdiagonales[0] = suma;                                   //guardo ls suma en el vector de suma de diagonales
            suma=0;

            for(int i=0; i<n; i++){                                       //Suma la diagonal secundaria
                suma += matriz[i][di];
                di--;
            }
            sumdiagonales[1] = suma;

            if(sumdiagonales[0]!=sumdiagonales[1]) opcion4=1;            //Analiza que la suma de las 2 diagonales sea igual
            else opcion4=0;
        }

    if(opcion4==1) cout<<"La matriz no es un cuadrado magico"<<endl;         //Analiza la opcion;
    else
        cout<<"La matriz es un cuadrado magico"<<endl;
}

int problema13(int **matriz13, int m13[6][8]){
    int x=0;
    float suma=0;

    for(int i=0; i<5;i++){                                                 //Se llena la matriz dinamica con la matriz estatica
        for(int j=0; j<8;j++) matriz13[i][j] = m13[i][j];
    }

    for(int i=1; i<6;i++){                                                 //Se recorre la matriz para hacer la suma.
        for(int j=1; j<7;j++){
                suma = (matriz13[i][j] + matriz13[i][j-1] + matriz13[i][j+1] + matriz13[i-1][j] + matriz13[i+1][j]);
                suma =suma/6;
                if(suma>6) x++;
                suma=0;
        }
    }

    for (int i=0; i<6; i++) delete[] matriz13[i];                         //Libera la memoria de las filas
    delete[] matriz13;                                                    //Libera la memoria del puntero

    return x;
}

void problema14(){
    int contador=1;
    int matriz[5][5];
    int matriz90[5][5];
    int matriz180[5][5];
    int matriz270[5][5];


    for(int i=0; i<5; i++){
        for(int j=0; j<5;j++){
            matriz[i][j] =contador;
            contador++;     }
    }
    cout<<"La matriz original es: "<<endl;
    immatriz(matriz);
    cout<<endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++) matriz90[j][5-1-i] = matriz[i][j];           //Se llena la matriz de 90
    }
    cout<<"La matriz rotada 90 grados es: "<<endl;
    immatriz(matriz90);
    cout<<endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++) matriz180[j][5-1-i] = matriz90[i][j];           //Se llena la matriz de 180
    }
    cout<<"La matriz rotada 180 grados es: "<<endl;
    immatriz(matriz180);
    cout<<endl;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++) matriz270[j][5-1-i] = matriz180[i][j];           //Se llena la matriz de 180
    }
    cout<<"La matriz rotada 270 grados es: "<<endl;
    immatriz(matriz270);
    cout<<endl;

}

void problema15(int vector15a[], int vector15b[], int *vector15c){

    if(vector15b[0]>=vector15a[0] && vector15b[0]<vector15a[2]){
        if(vector15b[1]>=vector15a[1] && vector15b[1]<vector15a[3]){

            vector15c[0] = vector15b[0];
            vector15c[1] = vector15b[1];
            vector15c[2] = vector15a[2];
            vector15c[3] = vector15a[3];
        }
        else cout<<"Los rectangulos no tienen interseccion. "<<endl;
    }
    else cout<<"Los rectangulos no tienen interseccion. "<<endl;
}

void problema16(int fil, int col, int n, int *total){

    if(col+1<n) problema16(fil, col+1, n, total);
    if(fil+1<n) problema16(fil+1, col, n, total);
    if(fil==col && fil==n-1) *total +=1;




}

void problema17(){
    int n, sumn=0, sumdiv=0, sumtotal=0, cont=0;

    cout<<"Ingrese un numero: "; cin>>n;

    for(int i=1; i<n; i++){                                       //Calcula la suma de los divisores del numero
        if(n%i==0) sumn += i;
    }

    for(int i=1; i<n; i++){                                       // Ciclo para analizar los numeros menores al ingresado
        for(int j=1; j<i; j++){                                       //Calcula la suma de los divisores de cada numero
            if(i%j==0) sumdiv += j;
        }

        if(sumn==i && sumdiv==n){                                //Se analiza la condicion para ser numeros amigables
            cout<<i<<endl;
            sumtotal += i;                                       //Si se cumple la condicion, suma el numero amigable
            cont++;
        }
        sumdiv=0;
    }

    if(cont>0) cout<<"La suma de los numeros amigables a "<<n<<" menores que el mismo es: "<<sumtotal+n<<endl;
    else
        cout<<"La suma de los numeros amigables a "<<n<<" menores que el mismo es: "<<0<<endl;
}

void problema18(){
    int n, iteracion, numero;
    cout<<"ingrese el numero de la iteracion: "; cin>>n;

    int resultado[10]= {0,0,0,0,0,0,0,0,0,0};
    int digitos[] = {0,1,2,3,4,5,6,7,8,9};

    iteracion = n-1;                                                            //para empezar desde cero

    if(n>0 && n<=factorial(10)){                                                //Condicion maximo de iteraciones en los digitos 0-9

        for(int i=0; i<n; i++){

            numero = iteracion/factorial(9-i);                            //Condicion para encontrar el primer digito de la iteracion
            resultado[i] = digitos[numero];

            for(int j=numero; j<9-i; j++)
                digitos[j] = digitos[j+1];                                //Se elimina el digito ya encontrado para no repetir

            iteracion %= factorial(9-i);                                  //Se calcula el nuevo valor de iteracion
            cout<<iteracion<<endl;
        }

        cout<<"La permutacion numero "<<n<<" es: "<<endl;

        for(int i=0; i<10; i++) cout<<resultado[i];

        cout<<endl;
    }
    else
        cout<<"El numero ingresado no es valido"<<endl;
}



int compdiferentes(int n, int vector[]){
    int x=0;
    for(int i=0; i<(n*n); i++){                                          //Verifica que los numeros de la matriz sean diferentes
        for(int j=i+1; j<(n*n); j++){
            if(vector[i] == vector[j]) x=1;
        }
    }
    return x;
}
int compiguales(int n, int vector[]){
    int x=0;
    for(int i=0; i<n; i++){                                          //Verifica que los numeros del vector sean iguales
        for(int j=i+1; j<n; j++){
            if(vector[i] != vector[j]) x=1;
        }
    }
    return x;
}



void imprimir(char (&matriz)[15][20]){
    cout<<"    0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19"<<endl;
    for(int i=0; i<15; i++){
        cout<<(char)(65 + i)<<":";
        for(int j=0; j<20; j++)cout<<"  "<<matriz[i][j];

        cout<<endl;
    }
}
void menu(){
    cout<<"Menu de reserva"<<endl;
    cout<<"Para hacer una reserva presione 1."<<endl;
    cout<<"Para hacer eliminar una reserva presione 2."<<endl;
    cout<<"Para salir del menu de reserva presione 0."<<endl;}
int potencia(int a){
    int p=1;
    for(int i=1; i<=a; i++)       //calcula 10 elevado al numero que le entre
        p = p*10;

    return p;
}

void immatriz(int matriz[5][5]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++) cout<<matriz[i][j]<<" ";
        cout<<endl;
    }
}

int factorial(int a){
    int x=1;
    for(int i=2; i<=a; i++) x *= i;

    return x;
}











