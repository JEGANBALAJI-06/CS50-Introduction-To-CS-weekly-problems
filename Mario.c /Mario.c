#include<cs50.h>
#include<stdio.h>
void print_space(int space);
void print_row(int bricks);
int main(void)

{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while(height<1);
    
    for(int i=0; i<height; i++)
    {
        print_space(height - i - 1);
        print_row(i+1)
    }
}
void print_space(int space)
{
    for (int i=0; i<space; i++)
    printf(" ");
}
void print_row(int bricks)
{
    for (int i=0; i<bricks; i++)
    {
        printf("#");
    }
    print("\n");
}
