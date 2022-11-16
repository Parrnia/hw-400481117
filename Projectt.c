#include<stdio.h>
int zarb (int a, int b){

int s= a*b;
return s;

}
 int summation (int a , int b){

 int sum=a+b;

 return sum;

 }
int subtraction (int a, int b){

int f= b-a;

return f;
}
int division (int a,int b){
 
 int d=  b/a;


return d;

}
int even(int a){
 if (a % 2==0)
 return 1;


 else 



}

void number (int a , int b){

for (int i=a+1 ; i<b  ; i++){

printf("%d ", i);


}

}
int main (){
int  a,b;
scanf("%d%d", &a , &b);

int s=summation(a,b);

printf("the summation of a and b is %d",s);

int z=zarb(a,b);

printf("\nthe multiplication of a and b is %d",z);
int f =subtraction(a,b);
printf("\nthe subtraction of a and b is %d",f);

int d=division(a,b);
printf("\nthe division of a and b is %d",d);


if (even(a)==1){

printf("\n a is even number ");


}

else {

printf("\n a is odd number ");


}


if (even(b)==1){

printf("\n b is even number ");


}

else {

printf("\n b is odd number ");


}

printf(" \nthe numbers between a and b are ");

number(a,b);




}
