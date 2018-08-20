#include <iostream>
#include<string>
using namespace std;

int main() {
	//code
	char s[10000];
	//cin.getline(s,10000);
	string s1;
	cin>>s1;
	int i = 0;
	while(s1[i]!='\0'){
		switch(s[i]){
			case '0':cout<<s[i];
					 break;
			case '1':cout<<s[i];
					 break;
			case '2':cout<<s[i];
					 break;
			case '3':cout<<s[i];
					 break;
			case '4':cout<<s[i];
					 break;
			case '5':cout<<s[i];
					 break;
			case '6':cout<<s[i];
					 break;
			case '7':cout<<s[i];
					 break;
			case '8':cout<<s[i];
					 break;
			default: break;	 		 		 		 		 		 		 		 		 
					 
		}
		i++;
	}
	return 0;
}
