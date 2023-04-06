#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

#define N 1000

int top = -1;

int stack[N];

void push();       
int pop();         
int peek();        
bool isEmpty();    
bool isFull();     

void binary_search();
void binary_search_op();
void searching();
void sorting();
void linked_list();
void stack_op();
void queue();
void tree();
void graph();
void linear_ds_op();
void non_linear_ds_op();
void intro();
void option1();

int main(){
    intro();
    printf("Choose any from the options below: \n\n");
    option1();
}

void intro(){
    printf("\n\n\n\n");
    printf("     ----------------- “ALL IN ONE DATA STRUCTURE” -----------------\n");
    printf("     ------ ONE PROGRAM THAT CAN TEACH YOU DATA STRUCTURES ------\n\n");
    printf("           *** WELCOME TO OUR LEARNING PROGRAM ***");
    
    struct tm* ptr;
    time_t t;
    t = time(NULL);
    ptr = localtime(&t);
    printf("\n                  %s", asctime(ptr));
    
    printf("\n      *******************************************************\n       *****************************************************\n");
    printf("\nPress enter to continue....");

    getchar();
    printf("\n\nA DATA STRUCTURE is not only used for ORGANIZING THE DATA. It is also used for processing, retrieving, and storing data. There are different basic and advanced types of data structures that are used in almost every program or software system that has been developed. So we must have good knowledge about data structures. \n\n");
    printf("><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><");
    printf("\n");
    getchar();
    printf("\nThere basically 2 types of Data Structure: \n\n     1. Linear Data Structure,\n     2. Non-Linear Data Structure");
    printf("\n");
    sleep(1);
    printf("\nLINEAR DATA STRUCTURE: Data structure in which data elements are arranged sequentially or linearly, where each element is attached to its previous and next adjacent elements, is called a linear data structure. \n\n");
    sleep(1);
    printf("NON-LINEAR DATA STRUCTURE: Data structures where data elements are not placed sequentially or linearly are called non-linear data structures. In a non-linear data structure, we can’t traverse all the elements in a single run only. \n\n");
    sleep(1);

    
    
}


void option1(){
    int opc1;
    printf("    1. Linear Data Structure \n");
    printf("        << Searching, Sorting, Linked List, Stack, Queue >>\n");
    printf("    2. Non-Linear Data Structure \n");
    printf("        << Tree, Graph >>");
    
    printf("\n\nChoice: ");
    scanf("%d", &opc1);
    switch (opc1){
        case 1:
            linear_ds_op();
            break;
        case 2:
            non_linear_ds_op();
        default:
            printf("\nChoose any from the 2 options: \n");
            option1();
            break;
    }
}
void linear_ds_op(){
    int opc2;
    printf("\n");
    printf("    Choose any from the options below: \n\n");
    printf("        1. Searching (Linear/Binary)\n        2. Sorting(Bubble/Insertion/Selection/Marge/Quick)\n        3. Linked List (Singly/Doubly/Circular)\n        4. Stack\n        5. Queue");
    printf("\n\nChoice: ");
    scanf("%d", &opc2);
    switch (opc2){
        case 1:
            searching();
            break;
        case 2:
            sorting();
            break;
        case 3:
            linked_list();
            break;
        case 4:
            stack_op();
            break;
        case 5:
            queue();
            break;
        default:
            printf("\nChoose any from the 5 options: \n");
            linear_ds_op();
            break;
    }
}
void linear_search(){

}
void binary_search(int arr[],int lower_bound, int upper_bound, int val){
    if(upper_bound >= lower_bound){
        int mid = lower_bound + (upper_bound-1)/2;
        
        if(arr[mid]==val){
            printf("Available at Location : %d", mid+1);
        }
        if(arr[mid]>val){
            return binary_search(arr,lower_bound, mid - 1,val);
        }
        if(arr[mid]<val){
            return binary_search(arr,mid+1, upper_bound,val);
        }
    }

}
void binary_search_op(){
    
    int size, lower_bound, upper_bound, val, i =0,j,tmp;
    printf("Enter the amount of element: ");
    scanf("%d", &size);
    int arr[size];
    printf("\nEnter the element one by one: ");
    for (i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    sleep(1);
    printf("\nFor use the binary search, the given data base should be sorted first,,, So for this our given data base will be sorted via a easy sorting algorithm which is bubble sort (User can use any kind of algorithm here)");
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[j] <arr[i])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    sleep(1);
    printf("\n\nEnter the value to search through Binary Search: ");
    scanf("%d", &val);
    printf("\n\n Now as per the algorithm we will set a value for 'Lower Bound' and 'Upper Bound' to Zero(0)  ");
    sleep(2);
    lower_bound = 0;
    upper_bound = size - 1;
    printf("\n Now initialize a integer data as mid which will be taken as the middle element of the given database");
    printf("\n And if the middle value of the data base is equal to the searching value, then the program will let us know the position for the searching value."); 
    sleep(3);
    printf("\n");
    binary_search(arr, lower_bound, upper_bound, val);

    
}
void searching(){
    int opc_searching;
    printf("\n");
    printf("There are basically two(2) types of searching method in Data Structure.\n\n     These 2 types are: \n");
    printf("        1. Linear Search,\n        2. Binary Search\n");
    printf("\nChoose any of them to see it's working formula: ");
    scanf("%d", &opc_searching);
    switch (opc_searching){
        case 1:
            linear_search();
            break;
        case 2:
            binary_search_op();
            break;
        default:
            printf("\nChoose any from the 2 options: \n");
            searching();
            break;
    }

}
void bubble_sort(){

}
void insertion_sort(){

}
void selection_sort(){
    int a[100], n, i, j, position, swap;
    printf("\n\nEnter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d Numbers", n);
    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
    for(i = 0; i < n - 1; i++){
        position=i;
        for(j = i + 1; j < n; j++){
            if(a[position] > a[j])
            position=j;
        }
        if(position != i){
            swap=a[i];
            a[i]=a[position];
            a[position]=swap;
        }
    }
    printf("\nSorted Array: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}
void marge_sort(){

}
void quick_sort(){
    
}
void sorting(){
    int opc_sorting;
    printf("\n");
    printf("There are many types of sorting method in Data Structure.\n\n     Some of them are: \n");
    printf("        1. Bubble Sort,\n        2. Insertion Sort\n        3. Selection Sort\n        4. Marge Sort\n        5. Quick Sort\n");
    printf("\nChoose any of them to see it's working formula: ");
    scanf("%d", &opc_sorting);
    switch (opc_sorting){
        case 1:
            bubble_sort();
            break;
        case 2:
            insertion_sort();
            break;
        case 3:
            selection_sort();
            break;
        case 4:
            marge_sort();
            break;
        case 5:
            quick_sort();
            break;
        default:
            printf("\nChoose any from the 5 options: \n");
            sorting();
            break;
    }
}
void linked_list(){

}
void stack_op(){
    printf("STATIC ARRAY (Total Capacity: %d)\n", N);
    int choice;

    while(1){
        printf("\nChoose any of the following options:\n");
        printf(" 0: Exit            1: Push            2: Pop            3: Peek\n");
        printf(" 4: Check if the stack is empty     5: Check if the stack is full\n\n");
        scanf("%d", &choice);

        switch(choice){
            case 0: exit(0);
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: isEmpty(); break;
            case 5: isFull(); break;
            default: printf("Please choose a correct option!");
        }
    }
}
/////
void push(){
    
    if(top == N-1)
        printf("Overflow State: can't add more elements into the stack\n");
    else{
        int x;
        printf("Enter element to be pushed into the stack: ");
        scanf("%d", &x);
        top+=1;
        stack[top] = x;
    }
}

int pop(){
    
    if(top == -1)
        printf("Underflow State: Stack already empty, can't remove any element\n");
    else{
        int x = stack[top];
        printf("Popping %d out of the stack\n", x);
        top-=1;
        return x;
    }
    return -1;
}

int peek(){
    int x = stack[top];
    printf("%d is the top most element of the stack\n", x);
    return x;
}

bool isEmpty(){
    if(top == -1){
        printf("Stack is empty: Underflow State\n");
        return true;
    }
    printf("Stack is not empty\n");
    return false;
}

bool isFull(){
    if(top == N-1){
        printf("Stack is full: Overflow State\n");
        return true;
    }
    printf("Stack is not full\n");
    return false;
}


//////////


void queue(){

}
void non_linear_ds_op(){
    int opc3;
    printf("\n");
    printf("    Choose any from the options below: \n\n");
    printf("        1. Tree\n        2. Graph");
    printf("\n\nChoice: ");
    scanf("%d", &opc3);
    switch (opc3){
        case 1:
            tree();
            break;
        case 2:
            graph();
            break;
    
        default:
            printf("\nChoose any from the 2 options: \n");
            non_linear_ds_op();
            break;
    }
}
void tree(){

}
void graph(){

}