#include<stdio.h>
int main (){
    int max ;

}
//     int a;
//     a = 10;
//     printf("%d",a);
//     return 0;
    
// }
#define max = 100;
int a [100];
int rear,front ;

void inti()
// this is call empty stack ...
{
    front=-1;
    rear = -2;
}



void enqueu (int x )//this x is peramiter 

// #*this is the chack for that tiome quee is full or empt or place are present 
//when we done fist insertion ,that time it r = 0 also same time f = 0 , next time insertion , so this time do not increase frot (f)

{
    if (rear=max-1)
    {
        printf("the queue is full ");
         return ;        
    }
    rear=rear+1;
    a[rear]= x;
    
    
}
