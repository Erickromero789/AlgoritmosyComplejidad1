#include <iostream>
using namespace std;
 
//Función que nos da el Promedio
float promedio(double nota1,double nota2, double nota3, double n)
	{float Promedio;
	Promedio = (nota1+nota2+nota3)/n;
	return (Promedio);
	}
 
//Programa Principal
int main()
{
  double nota1, nota2, nota3,notafinal,prom, i, n;
  int cnt1=0, cnt2=0;
  
  
cout<<"\n*********** Calculo De Notas ***********\n";
cout<<"\nIngrese cantidad de alumnos a registrar: ";
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
    cout<<"\nIngrese Nota Trabajos y Talleres: ";
	  cin>>nota3;
  }while(nota3 < 0 || nota3 > 5.0);
  nota3 = (nota3*0.2);

	notafinal = nota1+nota2+nota3;
  //Condicion si el alumno supera el 3.0 (Nota mínima)
	if (notafinal > 2.9)
	{
      		cnt1 ++;
      		cout<<"\nLa nota final es "<<notafinal<<"\n";
      		cout<<"\nEl estudiante a aprobado el curso\n";
      
	}
	else  
      		cnt2 ++;
}
cout<<"\n+++++++++++++++++++++++++++++++++++++++\n";
cout<<"\n+  Aprobaron "<<cnt1<<" Estudiantes\n";
cout<<"\n+  No Aprobaron "<<cnt2<<" Estudiantes\n";
//cout<<"\nListado de notas "<<notafinal;
  
}
