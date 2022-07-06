#include<bits/stdc++.h>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int multiply(int a, int b);
int division(int a, int b);
int power(int a, int b);
int sqroot(int a);
int log(int a);

int main(){ 
  cout<<"CALCULATOR\n";
  cout<<endl;
  int n;
  cout<<"Choose an operation-\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Raised power\n6.Squareroot\n7.Log(base10)\n";
  cin>>n;
  int a,b;
  switch(n){
    case 1:
     cout<<"Enter 2 numbers ";
     cin>>a>>b;
     cout<<"Sum= "<<add(a,b);
     break;
    case 2:
     cout<<"Enter 2 numbers ";
     cin>>a>>b;
     cout<<"Difference= "<<sub(a,b);
     break;
    case 3:
     cout<<"Enter 2 numbers ";
     cin>>a>>b;
     cout<<"Product= "<<multiply(a,b);
     break;
    case 4:
     cout<<"Enter dividend ";
     cin>>a;
     cout<<"Enter divisor ";
     cin>>b;
     cout<<division(a,b);
     break;
    case 5:
     cout<<"Enter a base ";
     cin>>a;
     cout<<"Enter power ";
     cin>>b;
     cout<<a<<" raised to the power "<<b<<" is "<<power(a,b);
     break;
    case 6:
     cout<<"Enter a number ";
     cin>>a;
     cout<<"Squareroot of "<<a<<" is "<<sqroot(a);
     break;
    case 7:
     cout<<"Enter a number ";
     cin>>a;
     cout<<"Log of "<<a<<" is "<<log(a);
     break;
  }
  
}
int add(int a, int b){
  int sum;
  sum=a+b;
  return sum;
}

int sub(int a, int b){
  int diff;
  diff=a-b;
  return diff;
}

int multiply(int a, int b){
  int product;
  product=a*b;
  return product;
}

int division(int a, int b){
  int quotient, remainder;
  quotient=a/b;
  remainder=a%b;
  cout<<"Quotient= "<<quotient<<"\tRemainder= "<<remainder;
  return 0;
}

int power(int a, int b){
  int ans;
  ans=1;
  for(int i=1; i<=b; i++){
    ans=ans*a;
  }
  return ans;
}

int sqroot(int a){
  int ans;
  ans=sqrt(a);
  return ans;
}

int log(int a){
  int ans;
  ans=log10(a);
  return ans;
}
  
