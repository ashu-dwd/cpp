//largest among three numbers
#include <iostream>

using namespace std;

int main(){
  int a,b,c;

  //we can also take input from user like thiss
  //cin>>a>>b>>c;

  cout<<"Enter 1st num: ";
  cin>>a;
  cout<<"Enter 2nd num: ";
  cin>>b;
  cout<<"Enter 3rd number: ";
  cin>>c;

  cout<<"========================="<<endl;
  if(a>b && a>c){
    cout<< a<<" is biggest among all."<<endl;
  }else if(b>a&& b>c){
    cout<< b<<" is biggest among all."<<endl;
  }else if(c>a && c>b){
    cout<< c<<" is biggest among all."<<endl;
  }else{
    cout<< "probably there is something wrong"<<endl;
  }


  return 0;
}