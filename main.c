#include <stdio.h>
//第二章 线性表
#define maxSize 100    //定义一个整型常量maxSize，值为100

//顺序表的结构体定义
typedef struct
{
    int data[maxSize]; //存放顺序表元素的数组（默认是int型，可根据题目要求将int换成其他类型）
    int length;        //存放顺序表的长度
}Sqlist;               //顺序表类型的定义

//单链表结点定义
typedef struct LNode
{
    int data;           //data中存放结点数据域（默认是int型）
    struct LNode *next; //指向后继结点的指针
}LNode;                 //定义单链表结点类型

//双链表结点定义
typedef struct DLNode
{
    int data;             //data中存放结点数据域(默认是int 型)
    struct DLNode *prior; //指向前驱结点的指针
    struct DLNode *next;  //指向后继结点的指针
}DLNode;//定义双链表结点类型

int main() {
    printf("Hello, World!\n");
    return 0;
}