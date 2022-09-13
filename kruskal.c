#include<stdio.h>
int graph[5][5];
int result[5][5];

int kruskal_find_minimum(){
int min = 10000;
int resulti, resultj;
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        if(graph[i][j] < min && graph[i][j] != 0){
            min = graph [i][j];
            resulti = i;
            resultj = j;
        }
    }
}
graph[resulti][resultj]=0;
result[resulti][resultj]= min;
}

int main(){
for(int i=0; i < 5; i++){
    for(int j=0; j < 5; j++){
        graph[i][j] = 0;
        result[i][j] = 0;
    }
}
graph[1][2] = 10;
graph[2][4] =5 ;
graph[4][3] = 11;
graph[3][2] = 8;
graph[1][4] = 2;


kruskal_find_minimum();
kruskal_find_minimum();
kruskal_find_minimum();

for(int i=1; i < 5; i++){
    for(int j=1; j < 5; j++){
        printf("%d ",result[i][j]);
    }
        printf("\n");
}
}
