//Write a program to add two user input numbers using 4 functions.
#include<stdio.h>
typedef struct
    {
        int num;
        int deno;
     
    }Fraction;
 
    Fraction sum(Fraction,Fraction);
 
    Fraction input(int x)
    {
     Fraction f;
     printf("Enter fraction %d(numerator/denominator):",x);
     scanf("%d/%d",&f.num,&f.deno);
     return f;
   
    }
    Fraction sum(Fraction f1, Fraction f2)
    {
     Fraction add={(f1.num * f2.deno) + (f2.num * f1.deno), f1.deno * f2.deno};
     int gcd=1;
     for(int i=1;i<=add.num && i<=add.deno;i++)
     {
       if(add.num%i==0 && add.deno%i==0)
       {
        gcd=i;
        }
     }
      add.num= add.num/gcd;
      add.deno= add.deno/gcd;
      return add;
    }
   void display(Fraction add)
   {
     printf("The addition of two fractions is %d/%d",add.num,add.deno);
   }
    int main()
    {
     Fraction f1 =input(1);
     Fraction f2 =input(2);
     Fraction result = sum(f1, f2);
     display(result);  
     return 0;
    }
