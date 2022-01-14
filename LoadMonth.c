#include <stdio.h>

int main()
{
    int month = 0, index, total = 0;
    
    printf("Enter number of month :");
    scanf("%d",&month);
    
    int arr[month];
    arr[0] = arr [1] = 1;
    
    if( month == 0){
        printf("Invalid Input");
        exit(0);
    }
    else if( month == 1) {
        printf("Total load received = 1");
        exit(0);
    }
    else {
        for(index = 2; index < month; index++) {
            arr[index] = arr[index - 1] + arr[index - 2];
        }
    }
    for(index = 0; index < month; index ++) {
        total += arr[index]; 
    }
    printf("Total load received = %d",total);
    return 0;
}
