#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    void 
    int choice, value;
    while(1){
        printf("\n***** Binary Tree Menu *****\n");
        printf("1. Insert\n");
        printf("2. Level Order Traversal\n");
        printf("3. Pre-Order Traversal\n");
        printf("4. In-order Traversal\n");
        printf("5. Post-order Traversal\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("Enter Value: ");
            scanf("%d", &value);
                break;
            case 2:
                break;
        }
    }
    return 0;
}