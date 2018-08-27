#include<iostream>
using namespace std;
int main(){

    for(int i = 0; i<10; i++){
        int p = 25 + (std::rand()%(63 - 25 + 1));
        cout<<p<<endl;
    }
    return 0;
}