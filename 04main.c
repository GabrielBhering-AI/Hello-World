#include <stdio.h>
#include <stdbool.h>
int main(){
    bool IsStudent = true;
    bool IsDisturbing = false;
    bool IsStudying = true;
    bool approved = IsStudent && IsStudying && !IsDisturbing;
    
    if (approved){
        printf("The student is approved");
    }
    else{
        printf("The student is NOT approved");
    }
    
    return 0;

}