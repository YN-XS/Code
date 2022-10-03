# include"stdio.h"
int main(){
    for (char i = 'A'; i <= 'E'; i++)
    {
        for (int j = '0'; j < '7';j++){
            printf("%c%c ", i,j);
        }
        printf("\n");
    }
}