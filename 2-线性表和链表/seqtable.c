/**
 *对顺序表的定义，初始化，插入，删除，清空
 *
*/
#include<stdio.h>
#include"seqtable.h"

int initData(struct seqtable *s,int *data,int n){
    int i;
    if(n>MAXSIZE){
        return 1;
    }
    for(i=0;i<n;i++){
        s->data[i]=data[i];
    }
    s->count=n;
    return 0;
}

void add(int *d,int value){

}

int delete(int data){

}

void clear(int *d){

}

int main(){
    struct seqtable s;
    int data[] = [1,2,3,4];
    int i;
    for(i=0;i<4;i++){
        s.data[i] = data[i];
    }
    s.data
    return 0;
}
