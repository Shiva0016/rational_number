#include<stdio.h>
#include<conio.h>
typedef struct{
	int numerator;
	int denomerator;
} rational;
rational makerational(int,int);
rational eqi_rational(rational,rational);
int main()
{
	int a,b,c,d;
	printf("Enter first rational number \n");
	scanf("%d / %d",&a,&c);
	printf("Enter second rational number \n");
	scanf("%d / %d",&b,&d);
	rational r1=makerational(a,c);
	rational r2=makerational(b,d);
	rational eqi = eqi_rational(r1,r2);
	if(r1==r2)
		printf("The rational numbers are equal");
}
rational makerational(int x,int y)
{
	rational r_number;
	r_number.numerator=x;
	r_number.denomerator=y;
	return r_number;
}
rational eqi_rational(rational r1,rational r2)
{
	rational result;
	result.numerator=(r1.numerator*r2.denomerator);
	result.denomerator=(r1.denomerator*r2.numerator);
	return result;
	
}
