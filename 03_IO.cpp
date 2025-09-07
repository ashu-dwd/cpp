#include <iostream>

using namespace std;

int main(){
  string name;
  int age;
  cout << "ENTER YOUR NAME:"<<endl;
  //cin>>name;
  getline(cin,name);
  cout <<"ENTER YOUR AGE:"<<endl;
  cin>>age;

  cout << "hello "<<name<<"! you are "<<age <<" years old.";
  return 0;
}