#include<stdio.h>
#include<conio.h>
int mutex=1;
int full=0;
int empty=10,x=0;
void producer()
{
    --mutex;
    ++full;
    --empty;
    x++;
    printf("producer item %d",x);
    ++mutex;
}
void consumer()
{
    --mutex;
    --full;
    ++empty;
    printf("consumer item %d",x);
    x--;
    ++mutex;
}
int main()
{
    int n,i;
    printf("\n press 1 for producer \n press 2 for consumer \n press 3 to exit \n");
    #pragma omp critical
    for(i=1;i>0;i++)
    {
        printf("enter your choice");
        scanf("%d",&n);
        switch(n)
        {
            case 1: if((mutex==1)&& (empty!=0))
            {
                producer();

            }
            else{
                printf("Buffer is full");
            }
            break;
            case 2: if((mutex==1)&&(full=0))
            {
                consumer();
            }
            else
            {
                printf("Buffere is empty");

            }
            break;
            case 3: exit(0);
            break;

            }
        }
    } 
