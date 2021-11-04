#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

int main(void) {
    /* 문제 1번
    char ch, upperCh;

    printf("Input Char : ");
    scanf(" %c", &ch);

    if ( ch < 'a' || ch > 'z' ) {
        printf("Input error!");
    } else {
        upperCh = ch - 32;
        printf("Changed lower case %c to upper case %c !", ch, upperCh);
    }

    
    */

   /* 문제 2번 
    int val; 

    printf("Input Value : ");
    scanf(" %d", &val);

    if ( val % 2 == 0 ) {
        printf("%d is an even number!", val);
    } else {
        printf("%d is an odd number!", val);
    }
    */

    /* 문제 3번
    int score;
    char grade;

    printf("input score( 0 ~ 100 ) : ");
    scanf(" %d", &score);

    if ( score >= 0 && score <= 100 ) {
        switch ( score / 10 ) {
            case 10 :
            case 9 : 
                grade = 'A';
                break;
            case 8 : 
                grade = 'B';
                break;
            case 7 : 
                grade = 'C';
                break;
            case 6 : 
                grade = 'D';
                break;
            default :
                grade = 'F';
                break;
        }

        printf("%d is %c grade!", score, grade);
    
    } else {
        printf("Input error!");
    }
    */

    /* 문제 4번
    int grade;

    printf("Input Grade( 1 ~ 7 ) : ");
    scanf(" %d", &grade);

    if ( grade == 1 ) {
        printf("Very Good!");
    } else if ( grade == 2 || grade == 3 ) {
        printf("Good!");
    } else if ( grade == 4 || grade == 5 ) {
        printf("Not Bad!");
    } else if ( grade == 6 || grade == 7 ) {
        printf("So So!");
    } else {
        printf("input error!");
    }
    */

    char lang;

    printf("Input the character : ");
    scanf("%c", &lang);

    switch ( lang ) {
        case 'p' :
        case 'P' :
            printf("Python.");
            break;
        
        case 'c' :
        case 'C' :
            printf("C language.");
            break;

        case 'j' :
        case 'J' :
            printf("JAVA.");
            break;

        case 'l' :
        case 'L' :
            printf("LISP.");
            break;
        default:
            printf("Input error!");
            break;
    }

    return 0;
}