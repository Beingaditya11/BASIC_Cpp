#include <bits/stdc++.h>
using namespace std;

void fillarray(int a[],int n);
void displayarray(int a[],int n);
void merge(int a[], int L,int mid, int R);
void mergesort(int a[], int L,int R);


void fillarray(int a[],int n)
{
	cout<<"ENTER ELEMENTS :"<<endl;
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
}
void displayarray(int a[],int n)
{
	cout<<"The array is : "<<endl;
	for(int i=0;i<=n-1;i++){
		cout<<a[i];
	}
}
void merge(int a[], int L,int mid, int R)
{ 
    int n1=mid-L+1;
    int n2=R-mid;
    int Left[n1+1],Right[n2+1];
	for(int i=0;i<n1;i++)
    {
        Left[i]=a[L+i];
    }
	for(int i=0;i<n2;i++)
    { 
    Right[i]=a[mid+1+i];
	Left[n1]=INT_MAX;
	Right[n2]=INT_MAX;
    }
	int i=0,j=0;
	for(int k=L;k<=R;k++) 
	{
		if(Left[i]<Right[j]) a[k]=Left[i++];
		else a[k]=Right[j++];
	}
}
void mergesort(int a[], int L,int R)
{
    if(L<R)
	{
		int mid=(L+R)/2; 
		mergesort(a,L,mid);
		mergesort(a,mid+1,R);
		merge(a,L,mid,R);
	}
}
int main()
{
    int n;
	cout<<"ELEMENTS IN ARRAY"<<endl; cin>>n;
	int a[n];
	fillarray(a,n);
	cout<<"\n----------------\nBEFORE SORTING\n"<<endl;;
	displayarray(a,n);
	cout<<"\n----------------\n";
	mergesort(a,0,n-1);
	cout<<"\n----------------\nAFTER SORTING\n"<<endl;
	displayarray(a,n);
	cout<<"\n----------------\n";
}