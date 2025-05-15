#include <iostream>
#include "functii.h"
using namespace std;

void init (coada *&q)
{
    q->head=0;
    q->tail=0;
}
void putsort(coada *&q, int x, char prio)
{
    element *p=new element;
    p->data=x;
    p->prio=prio;
    if (q->head==0)
    {
        q->head=p;
        q->tail=q->head;
    }
    else 
    {
        if(p->prio<q->head->prio)
        {
            p->suc=q->head;
            q->head=p;
            q->tail->suc=q->head;
        }
        else if (p->prio>=q->head->prio)
        {
            element *k=q->head;
            while(p->prio>=k->suc->prio && k->suc!=0)
            {
                k=k->suc;
            }
            p->suc=k->suc;
            k->suc=p;
        }
    }
}
