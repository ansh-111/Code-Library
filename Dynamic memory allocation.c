#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<process.h>
void read(int *a,int n);
void display(int *a,int n);

int main(){
    int *a,n;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    if(a==NULL){
        printf("Memory not allocated.");
        exit(0);
        getch();
    }
    read(a,n);
    display(a,n);

}

void read(int *a,int n){
    int i=0;
    for(i=0;i<n;i++){

    }
}

void display(int *a,int n){
    int i=0;
    for(i=0;i<n;i++){

    }
}
