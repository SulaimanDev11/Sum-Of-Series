#include<iostream>
double factorial(int);
using namespace std;
int main(){
	int i;
	float sum=0;
	for(i=1;i<=7;i++){
		sum+=i*1.0/factorial(i);
	}
	
	cout<<endl<<"Sum of the series is: "<<sum<<endl;
	return 0;
}

double factorial(int i)
	{
	int j,result=1;
	for(j=1;j<=i;j++){
		result*=j;
	}
	return result;
}
