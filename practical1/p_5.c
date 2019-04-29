#include<stdio.h>
#include<conio.h>
void print(char);
int main()
{

        void (*ptr)(char)=&print;
        (*print)('a');
        //void *ptr(char)=print;
       //` print('a');

}
void print(char c)
{
        printf("\n charaacter=%c",c);
}
