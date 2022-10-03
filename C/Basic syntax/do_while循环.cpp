# include"stdio.h"
int main(){
    int password;
    do
    {
        printf("Enter password: ");
        scanf("%d", &password);
    } while (password!=123456);
    printf("Success!");
}