#include<stdio.h>
#include <stdbool.h>

#define Max 5

int Queue[Max];
int Front = 0, Rear = -1, TotalItem = 0;


bool IsFull()
{
    if(TotalItem == Max)
    {
        return true;
    }
    return false;
}

bool IsEmpty()
{
    if(TotalItem == 0)
    {
        return true;
    }
    return false;
}


void enQueue(int Item)
{
    if(IsFull())
    {
        printf("Sorry The Queue is Full\n");
        //return ;
    }
    else
    {
        Rear = (Rear +1) % Max;
        Queue[Rear] = Item;
        printf("The Item %d is added!\n",Item);
        TotalItem++;

    }
}

void deQueue()
{
    if(IsEmpty())
    {
        printf("Sorry the Queue is Empty!\n");
        //return -1;
    }
    else
    {
        //printf("Delete The Front Item\n");
        int FrontItem = Queue[Front];
        Queue[Front] = 0;

        Front = (Front+1) % Max;
        TotalItem--;
        return FrontItem;
    }
}


void printQueue()
{
    printf("The Queue : ");
    for(int i=0; i<Max; i++)
    {
        printf("%d ",Queue[i]);
    }
    printf("\n");
}

int main()
{

     deQueue();
    enQueue(10);
    enQueue(20);
    enQueue(30);
    printQueue();
    printf("The Item %d is delete\n",deQueue());
    printQueue();
    enQueue(40);
    enQueue(50);
    printQueue();
    enQueue(60);
    printQueue();

    enQueue(70);
    deQueue();
    printQueue();
    enQueue(80);
    deQueue();
    enQueue(90);
    printQueue();
    return 0;

}
