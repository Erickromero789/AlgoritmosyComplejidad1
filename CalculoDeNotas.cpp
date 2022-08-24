#include <iostream>
#include <string>
using namespace std;

struct nodo{
  string codigo;
  struct nodo *sig;
} *prim = NULL, *ultm, *nuevo;
void entrarlista(string);
void printlist();

//Programa Principal
int main()
{

  float nota,notaf,suma = 0.0;
  int cnt1=0, n, i ;
  string cod;
  
  
do{
  cout<<"\n*********** Calculo De Notas ***********\n";
  cout<<"\nIngrese cantidad de alumnos a registrar: ";
  cin>>n;
}while(n <= 0); 

  for (int i = 0; i < n; i++) {  // leemos todas notas         
      notaf = 0.0;
      cout<<"\n*****Digite Codigo Del Estudiante Ejemplo (A001):  \n";
      cin>>cod;
      
      cout<<"\n*****Ingrese Notas del Estudiante " << cod << "***** \n";  
      do{
        cout<<"\nIngrese Nota Parcial: ";
	      cin>>nota;
      }while(nota < 0 || nota > 5.0);
      notaf += nota*0.5;
  
	    do{
        cout<<"\nIngrese Nota Quices: ";
	      cin>>nota;
      }while(nota < 0 || nota > 5.0);
      notaf += nota*0.3;
  
	    do{
        cout<<"\nIngrese Nota Trabajos y Talleres: ";
	      cin>>nota;
      }while(nota < 0 || nota > 5.0);
      notaf += nota*0.2;

      suma += notaf;
      //Condicion si el alumno supera el 3.0 (Nota mínima)
	    if (notaf >= 3.0 )
		  {
        cnt1 ++;
        cout<<"\n+ La nota final es "<<notaf<<"\n";
        cout<<"\n+ El estudiante a aprobado el curso\n";
      
		  } else if (notaf < 3.0){
        cout<<"\n+ La nota final es "<<notaf<<"\n";
        cout<<"\n+ El estudiante a desaprobado el curso\n";
      } 
    
      if(notaf == 5.0){
        entrarlista(cod);
      }
      
    }

  //Resultados
  cout<<"\n\n+++++++++++++++++++++++++++++++++++++++\n";
  cout<<"\n+  Aprobaron "<<cnt1<<" Estudiante(s)\n";
  cout<<"\n+  Desaprobaron "<<n-cnt1<<" Estudiante(s)\n";
  cout<<"\n+  La Nota Promedio Del Curso Es "<<suma/n<<"\n";
  printlist();
} 
void entrarlista(string cod) {
  nuevo = (struct nodo *) new (struct nodo);
  nuevo -> codigo = cod;
  if (prim == NULL)
    prim = nuevo;
  else
    ultm -> sig = nuevo;
    ultm = nuevo;
}

void printlist(){
  struct nodo *p=prim;
  cout<<"\n++ Lista De Estudiantes Que Sacaron (5,0) En La Nota Final ++\n";
  while(p != NULL) {
    cout<<"\n------------------------\n";
    cout<<"+ "<< p->codigo << endl;
    p = p->sig;
  }
  cout<<"\n";
}

