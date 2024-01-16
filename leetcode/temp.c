#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int top;
    int *arr;
} MinStack;

MinStack* minStackCreate() {
    MinStack *s = (MinStack*)malloc(sizeof(MinStack));
    s->top = -1;
    s->arr = (int*)malloc(sizeof(int));
    return s;
}

void minStackPush(MinStack *obj, int val) {
    MinStack *temp = obj;
}

int main(int argc, char *argv[]) {

    return 0;
}
