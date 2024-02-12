#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <windows.h> 
#include <unistd.h>
using namespace std;

int main(void)
{
    // Display message until key is pressed.

    cout << "test";

    sleep(2);


    // Use _getch to consume input.
    printf("\nKey struck was '%c'\n", _getch());

    cout << "test";

}