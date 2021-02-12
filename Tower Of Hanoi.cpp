//Tower Of Hanoi

#include<iostream>
using namespace std;

void TOH(int n,char Source, char Aux,char Destination)
{ 
	if(n==1)
	{
		cout<<"Move Disk "<<n<<" from "<<Source<<" to "<<Destination<<endl;
		return;
	}
	
	TOH(n-1,Source,Destination,Aux);
	cout<<"Move Disk "<<n<<" from "<<Source<<" to "<<Destination<<endl;
	TOH(n-1,Aux,Source,Destination);
}

int main()
{ 
	int n;
	
	cout<<"Enter no. of disks:";	
	cin>>n;
	TOH(n,'A','B','C');
	
	return 0;
}