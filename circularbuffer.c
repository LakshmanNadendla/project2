#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define buffer_size 5


typedef struct{
    int buffer[buffer_size];
    int head;
    int tail;
    int size;
}circularbuffer;

//Initialize buffer

void initbuffer(circularbuffer*cb){
    cb->head =0;
    cb->tail =0;
    cb->size = 0;

}


//Check buffer is full

bool isFull(circularbuffer*cb){
    return cb->size == buffer_size;

}


//check buffer is empty

bool isEmpty(circularbuffer *cb){
    return cb->size == 0;
}


//Enqueue element to buffer

bool enqueue(circularbuffer*cb, int value){
    if (isFull(cb)){
        printf("buffer is full\n");
        return false;
    }
    cb->buffer[cb->tail] = value;
    cb->tail = (cb->tail+1) %  buffer_size;
    cb->size++;
    return true;
}


//Dequeue element from a buffer

bool dequeue(circularbuffer*cb,int *value){
    if (isEmpty(cb)){
        printf("Buffer is empty\n");
        return false;
    }
    *value = cb->buffer[cb->head];
    cb->head = (cb->head+1) % buffer_size;
    cb->size--;
    return true;
}

//printing the current buffer size;

void printbuffer(circularbuffer*cb){
    printf("\nBuffer: ");
    for(int i =0;i<cb->size;i++){
        int index =(cb->head+i) % buffer_size;
        printf("%d ",cb->buffer[index]);

    }
}

int main()
{
    circularbuffer cb;
    initbuffer(&cb);
    enqueue(&cb,10);
    enqueue(&cb,20);
    enqueue(&cb,30);
    enqueue(&cb,40);
    enqueue(&cb,50);
    enqueue(&cb,60);
    printbuffer(&cb);
    int value;
    dequeue(&cb,&value);
    printbuffer(&cb);
    printf("Dequeued:%d\n",value);
    enqueue(&cb,60);
    printbuffer(&cb);
    return 0;



}