#include <iostream>
#include "functii.h"
using namespace std;

int main()
{
    coada *q;
    q=new coada;
    int x;
    char prio;
    init(q);
    cin>>x;
    cin>>prio;
    while(x!=0)
    {
        putsort(q,x,prio);
        cin>>x;
        cin>>prio;
    }
}

