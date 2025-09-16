#include <iostream>

using namespace std;

int sum(int a, int b){
  return a+b;
}

//no return type, no argument
void greet(){
  cout<<"Good morning"<<endl;
}

//no return type,argument
void greetUser(string name){
  cout<<"Good morning, "<<name<<endl;
}

//return type , no argument
int getNumber(){
  int n;
  cout<<"enter a number ";
  cin>>n;
  return n;
}

//return type with argument
int mul(int a, int b){
  return a*b;
}

int main(){
  int a=4 , b=56;
  cout<<sum(4,56)<<endl;
  return 0;
}