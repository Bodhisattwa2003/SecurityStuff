#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void alphanum(int n)
{
	const char alphanum[] = "0123456789abcdefghijklmnopqrstuvwxyz";
int string_length = sizeof(alphanum)-1;
	srand(time(0));
    cout<<"Generated password:";
    for(int i = 0; i < n; i++)
    cout << alphanum[rand() % string_length];
}
void alphanumcaps(int n)
{
	const char alphanum[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum)-1;
	srand(time(0));
    cout<<"Generated password:";
    for(int i = 0; i < n; i++)
    cout << alphanum[rand() % string_length];
}
void special(int n)
{
	const char alphanum[] = "0123456789!@#$%^&*()abcdefghijklmnopqrstuvwxyz!@#$%^&*()ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int string_length = sizeof(alphanum)-1;
	srand(time(0));
    cout<<"Generated password:";
    for(int i = 0; i < n; i++)
    cout << alphanum[rand() % string_length];

}
void num(int n)
{
	const char num[] = "0123456789";
	int string_length = sizeof(num)-1;	
	srand(time(0));
    cout<<"Generated password:";
    for(int i = 0; i < n; i++)
    cout << num[rand() % string_length];
}

int main()
{
    int n,o;
   
    cout<<"Enter 1 for Numeric password"<<endl;
    cout<<"Enter 2 for Alpha Numeric password"<<endl;
    cout<<"Enter 3 for Alpha Numeric password with Uppercase charachters"<<endl;
    cout<<"Enter 4 for Alpha Numeric password with uppercase charachters as well as special charachters "<<endl;
    cin>>o;
    cout<<"Enter the length of password:";
    cin>>n;
    switch(o)
    {
    	case 1: num(n);
    	break;
    		case 2: alphanum(n);
    	break;
    		case 3: alphanumcaps(n);
    	break;
    		case 4: special(n);
    	break;
	}
    
}