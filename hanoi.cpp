#include<iostream>
#include<stdlib.h>
using namespace std;

void move(char a,char b)
{
  cout<<a<<"---"<<b<<endl;
}
void hanoi(char A,char B,char C,int n)//定义函数从A经过B移到C,有n个盘子
{
  if(n==1)
  {
    move(A,C);
  }
  else
  {
    hanoi(A,C,B,n-1);
    move(A,C);
    hanoi(B,A,C,n-1);
  }
}
int main()
{
  int i;
  char A='a',B='b',C='c';
  cout<< "please input the number of diskes:";
  cin>>i;
  hanoi(A,B,C,i);
}
