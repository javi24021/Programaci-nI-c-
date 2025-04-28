crear un archivo en el block de notas y hacer un programa que muestre un mensaje 

#include <iostream>
#include <fstream>
//#include <ncurses.h>
using namespace std;

/*Leer texto de archivo sin espacios*/
void mostrarArchivoSinEspacios(char nombreDelArchivo [100]){
    ifstream archi;
    char car;
    archi.open(nombreDelArchivo);
    if(archi.is_open()){
        while(archi>>car){
            cout<<car;
        }
        archi.close();
    }
}

/*Leer archivos con espacios*/
void mostrarArchivoConEspacio(char NombreDelArchivo[100], char alumno[100]){
    ifstream archi;
    char car;
        if(archi.is_open()){
            while(archi.get(car)){
                cout<<car;
            }
            archi.close();
        }
}

void LeerNombres(char nombre[100]){
    cout<<"Nombre:";
    cin>>nombre;
}
void leerNota(int &nota){
    cout<<"Nota: ";
    cin >>nota;
}


void mostrarArchivoConEspacio2(char NombreDelArchivo[100], char alumno[100]){
    ifstream archi;
    char car;
    for(int i=0;i<;i++)
        if(archi.is_open()){
            while(archi.get(car)){
                cout<<car;
            }
            archi.close();
        }
}


/*Leer por pantalla para escribir un archivo*/
void LeerCrearArchivo(char nombredelArchivo[100], char alumno[100]){
    ofstream archi;
    archi.open(nombredelArchivo);
    cout<<"Ingresar la cantidad de alumnos: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        archi<<i<<LeerNombres[i]<<leerNota[i]<<endl;

    }
    archi.close();
}








int main()
{
    char alumno[100];
    LeerCrearArchivo("D:/c++/archivos/archiNombres.txt",alumno);
    mostrarArchivoConEspacio2("D:/c++/archivos/archiNombres.txt",alumno);

//    char car;
//    ifstream archi;
//    archi.open("D:/c++/archivos2/mensaje.txt");
//
//    if(archi.is_open()){
//        while(archi>>car){
//            //cout<<car;
//
//        }
//    }else{
//        cout<<"El archivo no existe"<<endl;
//    }
//    archi.close();
    return 0;
}
