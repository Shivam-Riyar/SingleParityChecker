#include<iostream>
#include<process.h>
using namespace std;
void Generator(int d[], int &N)
{	
	int i,tmp;
	int cnt=0;
	for(i=0; i<N; i++)
	{	tmp=d[i];
		if(tmp==1)
		{ 	cnt++;	 }
	}
	if(cnt%2==0)
	{
		d[N]=1;
	}
	else
	{
		d[N]=0;
	}
	cout<<"\n NUMBER OF '1's IN THE GIVEN DATA IS : "<<cnt;
	cout<<"\n DATA AFTER ADDING PARITY IS : ";
	for(i=0;i<=N;i++)
	{
		cout<<d[i]<<"  ";
	}
}
void Checker(int Pd[], int &N)
{
	int i,tmp;
	int cnt=0;
	for(i=0;i<N;i++)
	{	tmp=Pd[i];
		if(tmp==1)
		{
			cnt++;
		}
	}
	if(cnt%2==0&&Pd[N]==1)
	{
		cout<<"\n TRANSMISSION WAS SUCCESSFUL";
	}
	else if(cnt%2!=0&&Pd[N]==0)
	{
		cout<<"\n TRANSMISSION WAS SUCCESSFUL";
	}
	else
	{
		cout<<"\n !!! TRANSMISSION UNSUCCESSFUL !!! \n DISCARDING DATA ";
	}
}
int main()
{	
 	int data[30],Pdata[30],n,num;
	int ctr;
	char ch='y';
	do
	{
		cout<<"\n ------OPTIONS------ \n 1. PARITY BIT GENERATOR \n 2. PARITY BIT CHECKER \n 3. EXIT ";
		cout<<"\n ENTER YOUR CHOICE : ";
		cin>>ctr;
		switch(ctr)
		{
			case 1 : cout<<"\n ENTER DATA LENGTH : ";
					 cin>>n;
					 cout<<"\n ENTER DATA VALUE BITS : ";
					 for(int i=0;i<n;i++)
					 {
					 	cin>>data[i];
					 }
					 Generator(data,n);
					 break;
			
			case 2 : cout<<"\n ENTER DATA LENGTH : ";
				     cin>>num;
				     n=num+1;
				     cout<<"\n ENTER RECEIVED DATA BITS : ";
					 for(int i=0;i<n;i++)
					 {
					 	cin>>Pdata[i];
					 }
					 Checker(Pdata, n);
					 break;
					 
			case 3 : exit(0);
			default : cout<<"\n WRONG CHOICE " ;
		}
		cout<<"\n WANT TO CONTINUE? (Y/N) : ";
		cin>>ch;
	}while(ch=='y'||ch=='Y');
	return 0;
}
