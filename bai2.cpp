#include<stdio.h>
#include<conio.h>
// tinh tong bieu thuc:S(x,n)=x+x^2/2!+x^3/3!+_+x^n/n! 
  float S(float x,int n)
  {
   if (n==0) return 0;
   if(n==1) return x;
   return (1+x/n) *S(x,n-1) - (x/n) * S(x,n-2);
  }
  		int main()
  		{
  			float x;
  			int n;
  			printf("\n Nhap x:");
  			scanf("%f",&x);
  			printf("\n Nhap n:");
  			scanf("%d", &n);
  			float kq= S(x,n);
  			printf("\n Tong bieu thuc la:%f",kq);
  			getch();
  			return 0;
  			
		  }
	  
  
