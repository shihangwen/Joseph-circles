#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct node{              //建立节点的特征属性
  int data; //每一个人的标号
  struct node* next;
};
int main()
{
  int m,n,j;                 //一共有m个人，报到n的出局
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
  t->next=h;   //完成循环链表

  node *p1,*p2;
  j=1;
  p1=h;
  p2=p1->next;
  while(m!=1)//当只剩下一个人的时候退出循环
  {
    if(j==n-1)//执行删除节点的操作
    {
      p1->next=p2->next;    
      p2=p2->next;   
      m--;      //队列总人数减一
      j=0;
    }
    else   //指针走向下一个节点
    {
      p1=p2;
      p2=p2->next; 
      j++;
    }
  }
  cout<<p2->data;//输出最后一个值
}
