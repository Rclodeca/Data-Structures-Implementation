#include <stdio.h>

struct stack{
    int data[128];
    int index;
    int capacity;
};

//Return int error, 0 == failure, 1 == success
int push(struct stack this, int value){
    printf("index: %d, capacity: %d\n", this.index, this.capacity);
    fflush(NULL);
    if(this.index >= this.capacity){
        return 0;
    }
    this.data[this.index] = value;
    this.index++;
    return 1;
}

int pop(struct stack this){ 
    this.index--;
    return this.data[this.index];
}

int main(int argc,char *argv[]){

    struct stack one;
    one.index = 0;
    one.capacity = 128;

    //cant write one.push(3)
    push(one,3);
    push(one,4);
    push(one,5);

    printf("Popped value: %d\n", pop(one));

}
