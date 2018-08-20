#include<iostream>
#include<string>
using namespace std;
int main(){

char name1[256];
string name2;
cin.getline(name1,256); // for input
getline(cin,name2); // for input
cout<<name1<<"\n"<<name2;// for printing
}	
