#include <stdio.h>

int main(){

    char a[9];

    int i=0;

    int letter,blank,digit,other;

    letter=0;blank=0;digit=0;other=0;

    printf("Input 10 characters: ");

    while(i!=10){

        scanf("%c",&a[i]);
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z') letter++;
        if(a[i]>='0'&&a[i]<='9') digit++;
        if(a[i]==' ') blank++;
        i++;

    }

    other=10-letter-blank-digit;

    printf("letter=%d,blank=%d,digit=%d,other=%d",letter,blank,digit,other);

    return 0;

}


