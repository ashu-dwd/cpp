///printing nums from 0 to n;

#include <iostream>

using namespace std;

int main(){
  int num;
  cout<<"Enter the last number: ";
  cin>>num;

  for(int i=1; i <= num; i++){
    cout << i << " ";
  }
  return 0;
}