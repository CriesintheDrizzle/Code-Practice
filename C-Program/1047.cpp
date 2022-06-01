#define _CRT_SECURE_NO_WARNINGS 1
#include <malloc.h>
#include <stdio.h>
#define namespace std;

typedef struct student 
{
    int        number;
    struct student* next;
}*node, Node;                           /* ��� */

node creat(int n);                    /* ���������� */

void function(node l1, int baoshu);   /* ���к��� */

/*-------------------------------------------------------------*/

node creat(int n)
{
    node h;                                         /* ͷ���ָ�� */
    h = (node)malloc(sizeof(Node));        /* ����ͷ��� */
    h->next = NULL;                                 /* nextָ���򸳿� */
    node    q = h;                                  /* ����ָ��q��ָ��ͷ��� */
    node    p;

    for (int i = 1; i <= n; i++)                  /* ����n����� */
    {
        p = (node)malloc(sizeof(Node));
        (*p).number = i;                    /* ������ */

        p->next = q->next;                      /* ���ú�����ڵ� */
        q->next = p;
        q = p;
    }
    q->next = h->next;                              /* β�����׽������ */

    return(h);                                      /* ����ͷ��� */
}


/*-------------------------------------------------------------*/
void function(node l1, int baoshu)              /* �Ƴ�ʵ�� */
{
    node p = l1->next;                        /* ָ���׽�� */
    free(l1);                               /* freeͷ��� */
    node q = NULL;                             /* ָ���Ƴ���㣬�����ͷ��Ƴ����˵Ľ�� */
    while (p->next != p)
    {
        for (int i = 1; i <= baoshu - 2; i++) /* �ƶ����뿪���˵Ľ���ǰһ����ֻ��Ҫ�ƶ�baoshu-2�Σ� */
            p = p->next;

        q = p->next;              /* ��¼ɾȥ���˵Ľ�� */
        p->next = q->next;           /* ��q���������Ƴ� */

        p = p->next;                 /* �ƶ�����һ����ʼ�������ˣ�����Ҫ��һ�� */
        free(q);             /*�ͷ�q���*/
    }

    printf("%d", p->number);
    free(p);      /* �����һ�����free*/
}

int main()
{
    int    n = 0;                      /* ���� */
    node    head1;                  /* �����ͷ��� */
    int    baoshu = 3;
    scanf("%d", &n);
    /* cin >> baoshu; */          /*������䣬ʵ��n���ˣ�������Ϊbaoshu */
    head1 = creat(n);             /* ��������*/

    function(head1, baoshu);

    return(0);
}