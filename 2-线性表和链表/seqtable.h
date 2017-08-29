#ifndef seqtable_H
#define seqtable_H
#define MAXSIZE 50
//定义顺序表，使用数组实现
typedef struct seqtable{
    int count;
    int data[MAXSIZE];
}

int initData(struct seqtable *s,int *data,int n);

int add(struct seqtable *s,int value);

int get(struct seqtable *s,int index);

int delete(struct seqtable *s,int data);

void clear(struct seqtable *s);
#endif
