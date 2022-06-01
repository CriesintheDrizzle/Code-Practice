#define _CRT_SECURE_NO_WARNINGS 1
#include <malloc.h>
#include <stdio.h>
#define namespace std;

typedef struct student 
{
    int        number;
    struct student* next;
}*node, Node;                           /* 结点 */

node creat(int n);                    /* 创建链表函数 */

void function(node l1, int baoshu);   /* 运行函数 */

/*-------------------------------------------------------------*/

node creat(int n)
{
    node h;                                         /* 头结点指针 */
    h = (node)malloc(sizeof(Node));        /* 创建头结点 */
    h->next = NULL;                                 /* next指针域赋空 */
    node    q = h;                                  /* 定义指针q，指向头结点 */
    node    p;

    for (int i = 1; i <= n; i++)                  /* 创建n个结点 */
    {
        p = (node)malloc(sizeof(Node));
        (*p).number = i;                    /* 输入编号 */

        p->next = q->next;                      /* 采用后差法插入节点 */
        q->next = p;
        q = p;
    }
    q->next = h->next;                              /* 尾结点和首结点链接 */

    return(h);                                      /* 返回头结点 */
}


/*-------------------------------------------------------------*/
void function(node l1, int baoshu)              /* 移除实现 */
{
    node p = l1->next;                        /* 指向首结点 */
    free(l1);                               /* free头结点 */
    node q = NULL;                             /* 指向被移除结点，用于释放移除的人的结点 */
    while (p->next != p)
    {
        for (int i = 1; i <= baoshu - 2; i++) /* 移动到离开的人的结点的前一个，只需要移动baoshu-2次； */
            p = p->next;

        q = p->next;              /* 记录删去的人的结点 */
        p->next = q->next;           /* 把q结点从链表移除 */

        p = p->next;                 /* 移动到下一个开始报数的人，很重要这一步 */
        free(q);             /*释放q结点*/
    }

    printf("%d", p->number);
    free(p);      /* 把最后一个结点free*/
}

int main()
{
    int    n = 0;                      /* 人数 */
    node    head1;                  /* 链表的头结点 */
    int    baoshu = 3;
    scanf("%d", &n);
    /* cin >> baoshu; */          /*加上这句，实现n个人，报数数为baoshu */
    head1 = creat(n);             /* 创建链表*/

    function(head1, baoshu);

    return(0);
}