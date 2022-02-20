#include <stdio.h>

// 초대 * 의 수를 정의한다. 
#define MAX_START 3

// c 의 문자를 count 개수 만큼 출력한다.
void print_char(char c,int count)
{
    for (int i=0; i < count; i++)
        printf("%c",c);
}

// 한줄을 그린다. 
// 앞에 몇개의 space 를 출력하고, 그 후에 * 을 지정된 개수 만큼 출련한다. 
void print_line(int space_count, int star_count)
{
    print_char(' ',space_count);
    print_char('*',star_count);
}

// 줄바꿈을 한다. 
void newline()
{
    printf("\n");
}


int main(void)
{
    for (int i=MAX_START; i >= 0; i--) {
        int star_count = (MAX_START - i) *2 + 1;  //i 에 따라 1, 3, 5, 7 은 순열
        print_line(i, star_count);
        newline();
    }

    for (int i=0; i <= MAX_START; i++) {
        int star_count = (MAX_START - i) *2 + 1;  //i 에 따라 1, 3, 5, 7 은 순열
        print_line(i, star_count);
        newline();
    }
    
    return 0;
}