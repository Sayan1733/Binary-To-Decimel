#include <iostream>
#include <conio.h>
#include <math.h>
//Binary To Decimel Conversion
using namespace std;
int conversion(long long n)							//Function To Convert The Binary To Decimel
{
	int dec=0,rem=0,i=0;
	
	while(n!=0)										//main logic
	{
		rem=n%10;
		n/=10;										//n/=10 means n=n/10;
		dec+=(rem*pow(2,i));
		i++;
	}
	return dec;
}
int main()
{
	long long n;
	cout<<"Enter A Binary Number:";
	cin>>n;
	cout<<"The Binary Number "<<n<<" converted to Decimel value:"<<conversion(n);		//Calling The Function
	
	getch();
	return 0;
}
