#include <stdio.h>

struct stack{
    int data[128];
    int index;
    int capacity;
};

struct stack makestack(int N){
    struct stack new;
    new.capacity = N;
    new.top = 0;
    new.data = 
    return new;
}

//Return int error, 0 == failure, 1 == success
int push(struct stack *this, int value){
    printf("index: %d, capacity: %d\n", this->index, this->capacity);
    fflush(NULL);
    if(this->index >= this->capacity){
        return 0;
    }
    //core code
    this->data[this->index] = value;
    this->index++;
    return 1;
}

int pop(struct stack *this){ 
    this->index--;
    return this->data[this->index];
}

int main(int argc,char *argv[]){

    struct stack one;
    one.index = 0;
    one.capacity = 128;

    //cant write one.push(3)
    //push(&one,3);
   
    //printf("Popped value: %d\n", pop(&one));

    for(int i = 0; i < N; i++){
        push(&one,i);
    }
    for(int i = 0; i < N; i++){
        printf("%d ", pop(&one);
    }


}
