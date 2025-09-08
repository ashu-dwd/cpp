///check prime num or not
//prime numbers are divisible by none except than self and 1.

#include <iostream>

using namespace std;

int main(){
  int num;
  cout<<"Enter the number: ";
  cin>>num;

  if(num<0){
    cout<<"Please enter a valid number.It should be greater than 0"<<endl;
  }

  for(int i=2; i <= num; i++){
    //cout << i << " ";
    if(num%i == 0){
      cout<<num<<" is a prime number."<<endl;
      break;
    }else{
      cout<<num<<" is not a prime number."<<endl;
      break;
    }
  }
  return 0;
}