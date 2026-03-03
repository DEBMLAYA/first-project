#include<stdio.h>
int main ()
{

}
// for chaking codition .. like this condition , that queue are overflow condition or not

int circular_enqueue(int x){
    int front ,max , rear;
    if (front==(rear + 1)%max)    
    {
        printf("the queue is full");
        return;
    }
    rear=(rear+1)%max;
    a[rear]=x;
    if (front==-1)
    {
        front=0;
    }
    

    

}