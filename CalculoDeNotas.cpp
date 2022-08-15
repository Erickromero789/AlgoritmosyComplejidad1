#include <iostream>
using namespace std;
  
//Programa Principal
int main()
{
  double nota1, nota2, nota3,notafinal,prom,suma = 0.0;
  int cnt1=0, cnt2=0, n, i ;
  
do{
  cout<<"\n*********** Calculo De Notas ***********\n";
  cout<<"\nIngrese cantidad de alumnos a registrar: ";
  cin>>n;
}while(n <= 0); 

  for (int i = 1; i <= n; i++) {  // leemos el resto de notas desde el estudiante  2 hasta el estudiante n         
      cout<<"\n*****Ingrese Notas del Estudiantes " << i << "***** \n";
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
      suma = suma + notafinal;
      //Condicion si el alumno supera el 3.0 (Nota mínima)
	    if (notafinal >= 3.0)
		  {
        cnt1 ++;
        cout<<"\n+ La nota final es "<<notafinal<<"\n";
        cout<<"\n+ El estudiante a aprobado el curso\n";
      
		  } else if (notafinal < 3.0){
        cnt2 ++;
        cout<<"\n+ La nota final es "<<notafinal<<"\n";
        cout<<"\n+ El estudiante a desaprobado el curso\n";
      } 
    }  
 
  
//Resultados
cout<<"\n\n+++++++++++++++++++++++++++++++++++++++\n";
cout<<"\n+  Aprobaron "<<cnt1<<" Estudiante(s)\n";
cout<<"\n+  Desaprobaron "<<cnt2<<" Estudiante(s)\n";
cout<<"\n+  La Nota Promedio Del Curso Es "<<suma/n; 

}
