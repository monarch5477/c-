#include<iostream>

int main(){
	
	//INPUT THE DECIMAL NUMBER
	int num;
	std:: cout<<"Enter a Positive Integer = ";
	std:: cin>>num;
	
	//x IS USING FOR MEMORY OF THE VALUE IN num
	int x = num;
	std:: cout<<"\nFrom Decimal\t= "<<x;
	
	//COUNT THE INDEX OF ARRAY
	int y = 0;
	for(;num!=0;)
	{
		if(num%2!=0)
		{
			y++;
		}
		else
		{
			y++;
		}
		num=num/2;
	}
	
	//PUT THE BINARY RESULT IN ARRAY
	int i, arr[y];
	for(i = 0; i < y; i++)
	{
		if(x%2!=0)
		{
			arr[i]=1;
			x=x/2;
		}
		else
		{
			arr[i]=0;
			x=x/2;
		}
	}
	
	//REVERSE THE ARRAY
	int j, temp = 0;
	for(i = 0, j = y-1; i < y/2; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	
	//SHOW THE RESULT
	std:: cout<<"\nTo Binary\t= ";
	for(i = 0; i < y; i++)
	{
		std:: cout<<arr[i];
	}
}
