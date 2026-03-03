#include<stdio.h>
int main ()
{

}
//dequeue condition 
int dequeue(){
    int a[125];
    int data, front ,rear, max;
    if (front==-1)
    {
        printf("queue is empty ");
        return-1;
    }
    data=a[rear];
    if (front==rear)
    {
        front=rear =-1;
    }
    else {
        front=(front+1)%max;
    }    
    return data ;
}

