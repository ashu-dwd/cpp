#include <iostream>

using namespace std;

int main(){
  int a=10;
  int b=45;
  char ch = '@';
  string str = "raghav";

  cout<<"Equal to=> "<<(a==b)<<endl;
  cout << "not Equal to: "<<(a!=b)<<endl;
  cout << "logical and "<<(a>0 && b<0)<<endl;//dono conditions true honi chahiye to hi true
  cout << "logical or: "<<(a>0 ||b<0)<<endl; //koi ek condition true honi chahiye to true
  cout << "logical not:"<<(!a)<<endl; //0
  cout << "preincrement:"<<++a<<endl; //phle value badha do phir print kr do to value 11 ho gai
  cout <<"post increment:"<<a++ <<endl; // ab jab maine maine value uper wale stmt me badhakar 11 kr di thi to ab ye 11 hi rahegi post increment me value nhi badhti

  cout << "Size of integer:"<< sizeof(a)<<endl;
  cout << "Size of char:"<<sizeof(a)<<endl;
  return 0;
}
