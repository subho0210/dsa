#include<stdio.h>
int sum(int a, int b){ // formal
    
    return a+b;// return typ int tai ager line s int ache

}
int main(){
    int add= sum(10,30); // actual 
    printf("sum is %d",add);
    return 0;
}