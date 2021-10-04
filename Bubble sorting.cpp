#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int Arry[n];
	for(int i=0;i<n;i++){
		cin>>Arry[i];
	}
	int count=1;
	while(count<n){
		for(int i=0;i<n-count;i++){
			if(Arry[i]<Arry[i+1]){
				int temp=Arry[i];
				Arry[i]=Arry[i+1];
				Arry[i+1]=temp;
			}
			
		}
		count++;
	}
	for(int i=0;i<n;i++){
	cout<<Arry[i]<<"  ";
}
}
