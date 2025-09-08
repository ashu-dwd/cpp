//sum of first n natural numbers

///printing nums from 0 to n;

#include <iostream>

using namespace std;

int main(){
  int num;
  int sum=0;
  cout<<"How much nums you want to add: ";
  cin>>num;

  for(int i=1; i <= num; i++){
    sum =sum+ i;
  }
  cout<<"Sum: "<<sum<<endl;
  return 0;
}