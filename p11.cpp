//fibonacci series : 0 1 1 2 3 5 8

///printing nums from 0 to n;

#include <iostream>

using namespace std;

int main(){
  int num;
  int fib;
  int a=0,b=1,c;

  cout<<"Enter the number: ";
  cin>>num;

  for(int i=1; i <= num; i++){
    cout << a<<" ";
    c= a+b;
    a=b;
    b=c;
  }
  return 0;
}