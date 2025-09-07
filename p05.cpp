//performing all arithmetic operations
#include <iostream>

using namespace std;

int main(){
  int a,b;
  cout<<"Enter first num:";
  cin>>a;
  cout<<"Enter 2nd num:";
  cin>>b;

  int sum = a+b;
  int substract= a-b;
  int multiply = a*b;
  int divide = a/b;

  cout<<"sum: "<<sum<<endl;
  cout<<"substact: "<<substract<<endl;
  cout<<"multiply: "<<multiply<<endl;
  cout<<"divide: "<<divide<<endl;
  
  return 0;
}