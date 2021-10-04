#include<iostream>
using namespace std;

int main(){
	
	cout<<"How many Number you want to put in Arry:"<<endl;
	int n;
	cin>>n;
	int Arry[n];
	for(int i=0;i<n;i++){
	cin>>Arry[i];
	}
	
	for(int i=1;i<n;i++){
	for(int j=i+1;j<n;j++){	
	if(Arry[j]<Arry[i]){
		
		//swiping :
			
	int temp= Arry[j];
	Arry[j]=Arry[i];
	Arry[i]=temp;		
	}
	}
    }
	//Display:
		
		
    for(int i=0;i<n;i++){
	cout<<Arry[i]<<"  "; 
    }
    }


    
