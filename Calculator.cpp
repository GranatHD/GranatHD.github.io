#include<iostream>
#include<math.h>
using namespace std;
void sum()
{
int a,b,sum;
cout<<"\nenter the first number\n";
cin>>a;
cout<<"\nenter the second number\n";
cin>>b;
sum=a+b;
cout<<"sum ="<<sum<<endl;
}
void product()
{
int a,b,product;
cout<<"\nenter the first number\n";
cin>>a;
cout<<"\nenter the second number\n";
cin>>b;
product=a*b;
cout<<"product ="<<product<<endl;
}
void sub()
{
int a,b,sub;
cout<<"\nenter the first number\n";
cin>>a;
cout<<"\nenter the second number\n";
cin>>b;
sub=a-b;
cout<<"subtraction ="<<sub<<endl;
}
void div()
{
int a,b,div;
cout<<"\nenter the first number\n";
cin>>a;
cout<<"\nenter the second number\n";
cin>>b;
div=a/b;
cout<<"division ="<<div<<endl;
}
void remainder()
{
int a,b,remainder;
cout<<"\nenter the first number\n";
cin>>a;
cout<<"\nenter the second number\n";
cin>>b;
remainder=a*b;
cout<<"remainder = "<<remainder<<endl;
}
void square()
{
int a,square;
cout<<"\nenter a number\n";
cin>>a;
square=a*a;
cout<<"square ="<<square<<endl;
}
void cube()
{
int a,cube;
cout<<"\nenter a number\n";
cin>>a;
cube=a*a*a;
cout<<"cube is"<<cube<<endl;
}
void cos()
{
double a,result;
const float PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = cos (a*PI/180);
cout<<"the cosine of "<<a<<" is "<<result<<endl;
}
void sin()
{
double a,result;
const float PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = sin (a*PI/180);
cout<<"the sine of "<<a<<" is "<<result<<endl;
}
void tan()
{
double a,result;
const float PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = tan (a*PI/180);
cout<<"the tan of the "<<a<<" is "<<result<<endl;
}
void cosh()
{
double a,result;
const float PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = cosh (a);
cout<<"the hyperbolic cosine of "<<a<<" is "<<result<<endl;
}
void sinh()
{
double a,result;
const float PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = sinh (a);
cout<<"the hyperbolic sine of "<<a<<" is "<<result<<endl;
}
void tanh()
{
double a,result;
const float PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = tanh (a);
cout<<"The hyperbolic tangent of "<<a<<" is "<<result<<endl;
}
void acos()
{
double a,result;
const float PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = acos (a) * 180.0 / PI;
cout<<"The arc cosine of "<<a<<" is "<<result<<endl;
}
void asin()
{
double a,result;
const float PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = asin (a) * 180.0 / PI;
cout<<"The arc sine of "<<a<<" is "<<result<<endl;
}
void atan()
{
double a,result;
const float PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = tanh (a);
cout<<"The arc tangential of "<<a<<" is "<<result<<endl;
}
void exp()
{
double a,result;
cout<<"\nenter the number\n";
cin>>a;
result = exp (a);
cout<<"The exponential value of "<<a<<" is = "<<result<<endl;
}
void log()
{
double a, result;
cout<<"\nenter the value for log \n";
cin>>a;
result = log (a);
cout<<"The logarithm of "<<a<<" is "<<result<<endl;
}
void log10()
{
double a, result;
cout<<"\nenter the value for log \n";
cin>>a;
result = log10 (a);
cout<<"The common logarithm of "<<a<<" is "<<result<<endl;
}
void atan2()
{
float a,b,result,PI=3.14;
cout<<"\nenter the first number\n";
cin>>a;
cout<<"\nenter second the number\n";
cin>>b;
result = atan2 (a,b) * 180 / PI;
cout<<"The arc tangent for "<<a<<" and "<<b<<" is "<<result<<endl;
}
void pow()
{
int a,b, power;
cout<<"\nenter the number\n";
cin>>a;
cout<<"\nenter the power\n";
cin>>b;
power = pow(a,b);
cout<<"\n"<<a<<" raise to power "<<b<<" is "<< power;

}
int main()
{
	char ch='y';
	do
	{
		int op;
		cout<<" \n Enter the operation you want to perform  "<<endl;
		cout<<"** SCIENTIFIC CALUCLATOR **:";
		cout<<"\n Enter 1 For Addition :";
		cout<<"\n Enter 2 For Multiplication  :";
		cout<<"\n Enter 3 For Subtraction :";
		cout<<"\n Enter 4 For Division :";
		cout<<"\n Enter 5 For Reminder :";
		cout<<"\n Enter 6 For Square :";
		cout<<"\n Enter 7 For Cube :";
		cout<<"\n Enter 8 For Cos :";
		cout<<"\n Enter 9 For Sin :";
		cout<<"\n Enter 10 For Tan :";
		cout<<"\n Enter 11 For Hyperbolic Cos :";
		cout<<"\n Enter 12 For Hyperbolic Sinh :";
		cout<<"\n Enter 13 For Hyperbolic Tanh :";
		cout<<"\n Enter 14 For arc of cos :";
		cout<<"\n Enter 15 For arc of sin :";
		cout<<"\n Enter 16 For arc of tan :";
		cout<<"\n Enter 17 For Exponential :";
		cout<<"\n Enter 18 For Lograthim :";
		cout<<"\n Enter 19 For Log10 :";
		cout<<"\n Enter 20 For arc tangent :";
		cout<<"\n Enter 21 For power :"<<endl;
		cin>>op;
		switch(op)
		{
			case 1:
				sum();
				break;
			case 2:
				product();
				break;
			case 3:
				sub();
				break;
			case 4:
				div();
				break;
			case 5:
				remainder();
				break;
			case 6:
				square();
				break;
			case 7:
				cube();
				break;
			case 8:
				cos();
				break;
			case 9:
				sin();
				break;
			case 10:
				tan();
				break;
			case 11:
				cosh();
				break;
			case 12:
				sinh();
				break;
			case 13:
				tanh();
				break;
			case 14:
				acos();
				break;
			case 15:
				asin();
				break;
			case 16:
				atan();
				break;
			case 17:
				exp();
				break;
			case 18:
				log();
				break;
			case 19:
				log10();
				break;
			case 20:
				atan2();
				break;
			case 21:
				pow();
				break;
			default:
				cout<<"\n Invalid operation ";
		}
		cout<<"\n DO you want to perform another operation y/n :";
		cin>>ch;
	}
	while(ch=='y');
	return 0;
}
