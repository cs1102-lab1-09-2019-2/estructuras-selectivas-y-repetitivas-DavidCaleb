#include <iostream>

using namespace std; 

int main() {
  int num,max,i,min,n;
  
  cout<<"Ingrese cuantos numeros ingresara: ";
  cin>>n;
  
  for(i=0;i<n;i++){
    
    cout<<"Ingrese el numero: ";
    cin>>num;

    if (i==0){
      max = num;
      
    }
    else{
      if(num>max)max=num;
      
    }
  }
  cout<<"el numero mayor es: "<<max;
return 0;
}
