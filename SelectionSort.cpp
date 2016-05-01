#include <iostream>
using namespace std;
void SelectionSort(int A[], int n)
{
	int i,j,IMin,Tmp;
	for(i=0;i<n-1;i++) //start from leftmost to rightmost array
		{
			IMin=i;
			for(j=i+1;j<n;j++) // loop the rest of array besides the minimum
			{
				if(A[j]<A[IMin]) // compare if the imin is the minimum
					{
						IMin=j;
					}
				}
			Tmp=A[IMin];
			A[IMin]=A[j];
			A[j]=Tmp;
		}
	return;	
}

int main()
{
	int A[]={56,12,35,8,469,54};
	int n=6;
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<"\n";
	}
	SelectionSort(A,6);
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<"\n";
	}
}
