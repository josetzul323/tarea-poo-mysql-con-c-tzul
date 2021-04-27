// crud_edward.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include<mysql.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    MYSQL* cone;
    cone = mysql_init(0);//inicia la conexion
    cone = mysql_real_connect(cone, "localhost", "root", "12345", "exam", 3306, NULL, 0);//nos pide los datos para la conexion
    if (cone) {
        cout << "conexion exitosa" << endl;
    }
    else {
        cout << "no se realizo la conexion" << endl;
    }
    system("PAUSE");
    return 0;
}

