#include <stdlib.h> 
#include <time.h> 
#include <stdio.h>
#include <conio.h>

int num_pseudo(){
    return(time(NULL));
}

int main(){
    printf("%d",num_pseudo());
}