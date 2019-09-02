#include <iostream>

using namespace std; 

int main() {
  
int num,i,j;


  cin>>num;
  
  for (i=0;i<num;i++){
    
    for (j=0;j<num;j++){
      if(j==i)
      {cout<<"1";
      }else if(i==0 && j>=1){
        cout<<"1";
      }else if(i==num-1 && j<=num-1){
        cout<<"1";
      }else if(i>0 && j==0){
        cout<<"1";
      }else if(i<num-1 && j==num-1){
        cout<<"1";
      }else {
        cout<<" ";
      }
    }
    cout<<"\n";
  }
  return 0;
}
