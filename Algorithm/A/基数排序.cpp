#include <stdio.h>
#include <stdlib.h>
// ������������Ϊ10 
#define RADIX 10
// ���Ԫ�ظ���
#define MAX_LENGTH 100 
// ��̬������ 
struct node
{
  int data;
  // �±����ָ���ʾ��һ����� 
  int next;
}; 
// ��ȡ�ؼ���ÿһλ����
// i=1 ��ʾ��λ��i=2����ʾʮλ 
int get_digit(int n, int loc)
{
  int i;
  for(i=1; i<loc; i++)
    n = n/10;
  return n%10;
} 
// ������ռ�����
void distri_collect(struct node r[], int length, int loc)
{
  // ��������,ָ��ÿ�������� 
  int front[RADIX], rear[RADIX];
  // ��ʼΪ��
  int i;
  for(i=0; i<RADIX; i++)
  {
    front[i] = 0;
    rear[i] = 0;
  }
    
  // ����������̬�������չؼ��ַ��䵽��������
  int p,digit;
  for(p = r[0].next ; p!=0 ; p=r[p].next)
  {
    digit = get_digit(r[p].data, loc);
    
    // ������Ϊ��ʱֱ�Ӳ���
    if(front[digit] == 0)
      front[digit] = p;
    else
    {
      // ����β��
      r[rear[digit]].next = p; 
    } 
    rear[digit] = p; 
  }
  
  // �ռ��ϲ�
  // �ҵ���һ��1�ǿ������� 
  for(i=0; front[i] == 0 && i<RADIX; i++);
  r[0].next = front[i];
  p = rear[i];
  while(i<RADIX)
  {
    // Ѱ����һ���ǿ�������
        for(i++;i<RADIX-1 && front[i]==0;++i);
    
    // �����һ��Ԫ�����⴦�� 
    if(i>=RADIX) break;
    if(front[i])  
    {
      // ���������ǿ������� 
      r[p].next = front[i];
      p = rear[i]; 
    }
  } 
  r[p].next = 0;
}


void radix_sort(int a[], int length, int k)
{
  // ������̬����������
  // r[0]��ʾͷ��� 
  struct node r[MAX_LENGTH];
  // ��ʼ������Ϊ�� 
  r[0].next = 0;
  int i;
  for(i=0; i<length; i++)
  {
    r[i].next = i+1;
    r[i+1].data = a[i];
  }
  // �������һ��Ԫ��ָ��0����ʾ������� 
  r[i].next = 0;
  
  // �Թؼ��ְ��մӵ�λ����λ��������
  for(i=1; i<=k; i++)
    distri_collect(r, length, i);
    
  // �������Ľ�����Ƶ�ԭ����a�� 
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
