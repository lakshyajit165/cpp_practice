#include<iostream>
using namespace std;
int fibo(int n){
	
	int a = 1, b = 1, nt;
	if(n <= 2)
		return(1);
	for(int i = 2; i<n; i++){
		nt = a+b;
		a = b;
		b = nt;
	}
	return nt;
}
int prime(int n){
	
	int count,flag;	
	for(int i=2;i<=1000;i++)
  	{
    	flag=0;
    
	    for(int j=2;j<=i/2;j++)
	    {
	        if(i%j==0) 
	        {
	          flag=1;
	           break;
	        }     
	    }
	    
	  if(flag==0)
	    count++;
	  if(count == n)
	  	return(i);  
	}

}
int main(){
	
	int n,num;
	cin>>n;
	if(n%2!=0)
		num = fibo(n/2+1);
	else
		num = prime(n/2);
	cout<<num;		
	return 0;
}
