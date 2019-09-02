#include <iostream>
#include <cmath>


using namespace std;
int i,num;

float promedio(){

  int PC1,PC2,PC3,PC4,P1,E1,E2;
  float prom;

  for (i=1;i<=num;i++){
    cout<<"Alumno numero "<<i;
    
    do{
      cout<<"Practica 1: ";
      cin>>PC1;

    }while(PC1<0 || PC1>20);

    do{
      cout<<"Practica 2: ";
      cin>>PC2;

    }while(PC2<0 || PC2>20);

    do{
      cout<<"Practica 3: ";
      cin>>PC3;

    }while(PC3<0 || PC3>20);

    do{
      cout<<"Practica 4: ";
      cin>>PC4;

    }while(PC4<0 || PC4>20);

    do{
      cout<<"Proyecto 1: ";
      cin>>P1;

    }while(P1<0 || P1>20);

    do{
      cout<<"Examen 1: ";
      cin>>E1;

    }while(E1<0 || E1>20);

    do{
      cout<<"Examen 2: ";
      cin>>E2;

    }while(E2<0 || E2>20);


    prom= PC1*0.05+PC2*0.1+PC3*0.1+PC4*0.15+P1*0.2+E1*0.2+E2*0.2;

    cout<<"Su promedio es "<<prom;


    if(prom>=18.0 && prom<=20){
      cout<<"UD asistira a ACM - ICPC International Collegiate Programming Contest";

    }else if(prom>=15.0 && prom<=17.99){
      cout<<"UD asistira al Imagine Cup";
    }else if(prom>=12.0 && prom<=14.99){
      cout<<"UD asistira al Hackaton de Miraflores";
    }else if(prom < 12.0){
      cout<<"Necesita mejorar";
    }
  }
  return 0;
  
}



int main() {

  int num;
  float promedior;
  do{
    
    cout<<"Numero de alumnos: ";
    cin>>num;

  }while(num < 3 || num>=30);
  
  promedior= promedio();
  return promedior;

}
