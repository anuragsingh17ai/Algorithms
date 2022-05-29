/*
PROPERTY

(a+b)%m=((a%m)+(b%m))%m
(a-b)%m=((a%m)-(b%m)+m)%m
(a*b)%m=((a%m)*(b%m))%m
(a/b)%m=((a%m)*(b^-1 % m))%m

QUESTION

Given an integer N.print its factorial
Constraint:-
  1<=N<=100
  print answer Modulo M
  where M=47
 */
 
 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
  int n,fact=1;
  int m=47;
  cin>>n;
  for(int i=2;i<=n;i++)
    fact=(fact*i)%m;              //Here it is following multiplication property of modulo..
                                  //as we cant store fact even in long long 
  cout<<fact;
  return 0;
  }
