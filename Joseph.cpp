#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node{
  int data;//原有的顺序
  struct node* next;
};
int main()
{
  int m,n,j;//一共有m个人，报到n的出局
  node *h,*p,*t;
  cout <<"please input the total number of the queue:";
  cin >>m;
  cout << "please input the number you want to choose:";
  cin >>n;
  h=0;
  for(int i=1;i<m+1;i++)
  {
    p=(node*)malloc(sizeof(node));
    p->data=i;

    if(h==0)
    {
      h=p;
      t=p;
    }
    else
    {
      t->next=p;
      t=p;
    }
  }
  t->next=h;

  node *p1,*p2;
  j=1;
  p1=h;
  p2=p1->next;
  while(m!=1)
  {
    if(j==n-1)
    {
      p1->next=p2->next;
      p2=p2->next;
      m--;
      j=0;
    }
    else
    {
      p1=p2;
      p2=p2->next;
      j++;
    }
  }
  cout<<p2->data;
}
