#include<stdio.h>
int main(){
int data[3] = {5,2,7};
int dead[100];
int tree[15];
int control=0;
int flag = 0;

int element = 0;

for(int i=0; i<15; i++){
    tree[i] = 0;
}

for(int i=0; i<7; i++){
        for(int j=0; j<control; j++){
            if(i==dead[j]){
                flag = 1;
                break;
            }
        }
    if(i==1 || i==3){
            if( flag == 1){
                continue;
            }
    element++;

    }
    tree[2*i+1]=tree[i]+data[element];
    tree[2*i+2]=tree[i];
    if(tree[2*i+1]==7 || tree[2*i+2]==7)
    {
        printf("solution ");
    }
        if(tree[2*i+1]>7){

            dead[control]=2*i+1;

            printf("0 ");
        control++;
            }
            if(tree[2*i+2]>7){

            dead[control]=2*i+2;

            printf("0 ");
            control++;
            }
            }
}
