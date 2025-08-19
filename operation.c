#include <stdio.h>
#define MAX 5
void insert(int *, int pos, int num);
void del(int *, int pos);
void reverse(int *);

int main()
{
    int arr[5];
    insert(arr, 1, 11);
    insert(arr, 2, 12);
    insert(arr, 3, 13);
    insert(arr, 4, 14);
    insert(arr, 5, 15);
    printf("element of array:\n");
    display(arr);
    del(arr, 5);
    del(arr, 2);
    printf("after deletation:\n");
    display(arr);
    insert(arr, 2, 222);
    insert(arr, 5, 555);
    printf("after insertion:\n");
    display(arr);
    reverse(arr);
    printf("after reversing:\n");
    display(arr);
    search(arr, 222);
    search(arr, 555);
    return 0;
}
/*inserts an element num at given position pos*/
void insert(int *arr, int pos, int num)
{
    /*shift elements to right*/
    int i;
    for (i = MAX - 1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[i] = num;
}
/*deletes an element from the given position pos*/
void del(int *arr, int pos)
{
    /*skip to the desired position*/
    int i;
    for (i = pos; i < MAX; i++)
        arr[i - 1] = arr[i];
    arr[i - 1] = 0;
}
/*reverses the entire array*/
void reverse(int *arr)
{
    int i;
    for (i = 0; i < MAX / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[MAX - 1 - i];
        arr[MAX - 1 - i] = temp;
    }
}
/*search array for a given element num*/
void search(int *arr, int num)
{
    int i;
    for (i=0;i<MAX;i++){
        if(arr[i]==num)
        {
            printf("element %d is at %dth position\n",num,i+1);

        }
    }
    printf("element %d is sbsent\n",num);
}
/*display content of a array*/
void display (int *arr)
{
    int i;
    for(i=0; i<MAX;i++)
    printf("%d\t",arr[i]);
    print("\n");
}
