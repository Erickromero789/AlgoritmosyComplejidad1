#include <iostream>
using namespace std;
 
//Función que nos da el Promedio
float promedio(float nota1,float nota2, float nota3)
	{float Promedio;
	Promedio = (nota1+nota2+nota3)/3;
	return (Promedio);
	}
 
//Programa Principal
int main()
{
  float nota1, nota2, nota3, i, n, notafinal;
cout<<"Ingrese cantidad de alumnos:";
cin>>n;
//Bucle para ingreso de Notas, en base a 3 Unidades
for (i=1;i<=n;i++){
  do{
    cout<<"\nIngrese Nota Parcial: ";
	  cin>>nota1;
  }while(nota1 < 0 || nota1 > 5.0);
  nota1 = (nota1*0.5);
  
	do{
    cout<<"\nIngrese Nota Quices: ";
	  cin>>nota2;
  }while(nota2 < 0 || nota2 > 5.0);
  nota2 = (nota2*0.3);
  
	do{
    cout<<"\nIngrese Nota Parcial: ";
	  cin>>nota3;
  }while(nota3 < 0 || nota3 > 5.0);
  nota3 = (nota3*0.2);

	notafinal = (nota1+nota2+nota3);
  promedio(nota1,nota2,nota3);

	//Condicion si el alumno supera el 10.5 (Nota mínima)
	if (notafinal >= 3.0)
		{cout<<"\nEl alumno ha aprobado la materia.\n";
		}
	else
		cout<<"\nEl alumno ha desaprobado la materia.\n";
	}
}
