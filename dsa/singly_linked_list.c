typedef int ElemType;
typedef struct Node
{
    ElemType data;
    struct Node *next;
}Node;
typedef struct Node *Linklist;  //頭指標
typedef int Status;



//GetElem 
Status GetElem(Linklist L,int i,ElemType *e)
{
    Linklist p;
    int j;
    p = L->next;
    j= 1;
    while(p&&j<i)
    {
        p = p->next;
        ++j;
    }
    if(!p||j>i)
    {
        return 0;
    }
    *e = p->data;
    return 1;
}




//Insert
Status ListInsert(Linklist *L,int i,ElemType e)
{
    int j;
    Linklist p =*L->next;
    j=1;
    while(p&&j<i)
    {
        p = p->next;
        ++j;
    }
    Linklist s = (Linklist)malloc(sizeof(Node));
    s->data = e;
    s->next =p->next;
    p->next = s;

}



//Delete 
Status ListDelete(Linklist *L,int i,ElemType *e)
{
    int j;
    j=1;
    Linklist p,s;
    p = *L;
    while(p&&j<i)
    {
        p =p->next;
        ++j

    }
    s=p->next;
    p->next=s->next;
    *e=s->data;
    free(s);

    
}





//create(頭差法)
void CreateListHead(Linklist *L, int n)
{
    Linklist p;
    int i;
    srand(time(0));
    *L=(Linklist)malloc(sizeof(Node));
    (*L)->next=NULL;
    for(i=0;i<n;i++)
    {
        p =(Linklist)malloc(sizeof(Node));
        p->data= rand()%100+1;
        p->next=(*L)->next;
        (*L)->next=p;
    }
}


//create(尾差法)
void CreateListTail(Linklist *L, int n)
{
    Linklist p,r;
    int i;
    srand(time(0));
    *L=(Linklist)malloc(sizeof(Node));
    r=*L;
    for(i=0;i<n;i++)
    {
        p = (Linklist)malloc(sizeof(Node));
        p->data = rand()%100+1;
        r->next=p;
        r=p;
    }
    r->next=NULL;
}
