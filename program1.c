#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
char processname[20],arrivaltime[20],bursttime[20],starttime[20],waitingtime[20],turnaroundtime[20],finishtime[20],avgtime,avgwaittime;
printf("Enter the number of process\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    if(i==0)
    {
        starttime[i]=arrivaltime[i];
        waitingtime[i]=starttime[i]-arrivaltime[i];
        finishtime[i]=starttime[i]+bursttime[i];
        turnaroundtime[i]=finishtime[i]-arrivaltime[i];
}
else
{
    starttime[i]=arrivaltime[i-1];
    waitingtime[i]=starttime[i]-arrivaltime[i];
    finishtime[i]=starttime[i]+bursttime[i];
    turnaroundtime[i]=finishtime[i]-arrivaltime[i];               
    }
}
int tottat=0;
int totwt=0;
 printf(" \n Process arrivaltime bursttime starttime TAT finish");
    for(int i=0;i<n;i++)
    {
        scanf("%s%d%d%d%d%d%d",&processname[i],&arrivaltime[i],&bursttime[i],&starttime[i],&turnaroundtime[i],&finishtime[i]);
        tottat+=turnaroundtime[i];
        totwt+=waitingtime[i];
    }
    avgtime=tottat/n;
    avgwaittime=totwt/n;

    printf("average turnaround time:%d");
    
        printf("Average turn around \n",avgtime);
        printf("Average waiting time \n",avgwaittime);
    
    }