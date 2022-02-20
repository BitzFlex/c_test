#include <stdio.h>

// 초대 * 의 수를 정의한다. 
#define MAX_START 5

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
    print_char('.',space_count);
    print_char('o',star_count);
    print_char('.',space_count);
}

// 줄바꿈을 한다. 
void newline()
{
    printf("\n");
}

//n 에 따라 1, 3, 5, 7 의 홀수 순열을 만든 
int odd_number(int n)
{
    return (MAX_START - n)*2 + 1;
}


/*

   *
  ***
 *****
*******
*******
 *****
  ***
   *
   을 출력하는 프로그램 예제
*/

int main(void) {

    for (int i=MAX_START; i >= 0; i--) {
        print_line(i, odd_number(i));
        newline();
    }

    for (int i=0; i <= MAX_START; i++) {
        print_line(i, odd_number(i));
        newline();
    }
    

    return 0;
}