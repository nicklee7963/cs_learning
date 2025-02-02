#define MAXSIZE 20
typedef int ElemType;
typedef struct
{
    ElemType data[MAXSIZE];
    int length;
}SqList;

//GetElem
#define OK 1
#define ERROR 0
typedef int Status;
Status GetElem(SqList L,int i,ElemType *e)
{
    if(L.length==0||i<1||i>L.length)
    {
        return ERROR;
    }
    *e = L.data[i-1];
    return OK;
}


//insert
Status ListInsert(SqList *L, int i, ElemType e)
{
    int k;
    if (L->length==MAXSIZE||i<1||i>L->length+1)
    {
        return ERROR;
    }
    if (i<=L->length)
    {
        for(k=L->length-1;k>=i-1;k--)
        {
            L->data[k+1]=L->data[k];
        }
    }
    L->data[i-1]=e;
    L->length++;

    return OK;
}




//delete
Status ListDelete(SqList *L,int i, ElemType *e)
{
    int k;
    if(L->length=0||i<1||i>L->length)
    {
        return ERROR;
    }
    *e = L->data[i-1];
    if(i<L->length)
    {
       for(k=i;k<L->length;k++) 
       {
        L->data[k-1]=L->data[k];
       }

    }
    L->length--;
    return OK;
    

}



int main()
{
    return 0;
}


