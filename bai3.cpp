#include<stdio.h>
#include<conio.h>
//
long tinhYn(int n );
long tinhXn(int n )
{
	if(n==0) 
	return 1;
	return tinhXn(n-1) + tinhYn(n-1); 
}
long tinhYn(int n)
{
	if(n==0)
	return 1;
	return 3*tinhXn(n-1)+2*tinhYn(n-1); 
 } 
 int main()
 {int n;
 printf("\n Nhap n:");
 scanf("%d",&n);
 long kq1 = tinhXn(n);
 long kq2 = tinhYn(n);
 printf("\n  Xn=%d, Yn=%d", kq1, kq2);
 getch();
 return 0;
  } 


