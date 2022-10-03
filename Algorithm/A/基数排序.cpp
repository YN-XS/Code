#include <stdio.h>
#include <stdlib.h>
// 对整数，基数为10 
#define RADIX 10
// 最大元素个数
#define MAX_LENGTH 100 
// 静态链表结点 
struct node
{
  int data;
  // 下标代替指针表示下一个结点 
  int next;
}; 
// 获取关键字每一位数字
// i=1 表示个位，i=2，表示十位 
int get_digit(int n, int loc)
{
  int i;
  for(i=1; i<loc; i++)
    n = n/10;
  return n%10;
} 
// 分配和收集操作
void distri_collect(struct node r[], int length, int loc)
{
  // 辅助数组,指向每个链队列 
  int front[RADIX], rear[RADIX];
  // 初始为空
  int i;
  for(i=0; i<RADIX; i++)
  {
    front[i] = 0;
    rear[i] = 0;
  }
    
  // 遍历整个静态链表，按照关键字分配到各链队列
  int p,digit;
  for(p = r[0].next ; p!=0 ; p=r[p].next)
  {
    digit = get_digit(r[p].data, loc);
    
    // 链队列为空时直接插入
    if(front[digit] == 0)
      front[digit] = p;
    else
    {
      // 插入尾部
      r[rear[digit]].next = p; 
    } 
    rear[digit] = p; 
  }
  
  // 收集合并
  // 找到第一个1非空链队列 
  for(i=0; front[i] == 0 && i<RADIX; i++);
  r[0].next = front[i];
  p = rear[i];
  while(i<RADIX)
  {
    // 寻找下一个非空链队列
        for(i++;i<RADIX-1 && front[i]==0;++i);
    
    // 对最后一个元素特殊处理 
    if(i>=RADIX) break;
    if(front[i])  
    {
      // 链接两个非空链队列 
      r[p].next = front[i];
      p = rear[i]; 
    }
  } 
  r[p].next = 0;
}


void radix_sort(int a[], int length, int k)
{
  // 创建静态链表保存数据
  // r[0]表示头结点 
  struct node r[MAX_LENGTH];
  // 初始化链表为空 
  r[0].next = 0;
  int i;
  for(i=0; i<length; i++)
  {
    r[i].next = i+1;
    r[i+1].data = a[i];
  }
  // 链表最后一个元素指向0，表示链表结束 
  r[i].next = 0;
  
  // 对关键字按照从低位到高位进行排序
  for(i=1; i<=k; i++)
    distri_collect(r, length, i);
    
  // 将排序后的结果复制到原数组a中 
  int p = r[0].next;
  for(i=0; i<length && p!=0; i++)
  {
    a[i] = r[p].data;
    p = r[p].next;
  }
}
int main(void)
{
    int a[14] = {103,102,101,401,489,345,322,710,500,609,800,0,3,4};
    radix_sort(a, 14, 3);
    int i;
    for(i=0; i<14; i++)
      printf("%d ", a[i]);
    return 0;
}
