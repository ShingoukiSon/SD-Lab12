#pragma once

struct element
{
    int data;
    element *suc;
    char prio;
};
struct coada
{
    element *head,*tail;
};
void init (coada *&q);
void putsort(coada *&q, int x, char prio);