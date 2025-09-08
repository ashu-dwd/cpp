#include <iostream>

using namespace std;

int main(){
  int dayNum;

  cout<<"enter day number: ";
  cin>>dayNum;
  
  switch(dayNum){
    //case ko run krne ke baad break kr do
    case 1 : cout<<"Monday"<<endl;  break;
    case 2 : cout<<"Tuesday"<<endl; break;
    case 3 : cout<<"Wednesday"<<endl; break;
    case 4 : cout<<"Thursday"<<endl; break;
    case 5 : cout<<"Friday"<<endl; break;
    case 6 : cout<<"Saturday"<<endl; break;
    case 7 : cout<<"Sunday"<<endl; break;
    default : cout<<"Not Found"<<endl; break;
  }
}