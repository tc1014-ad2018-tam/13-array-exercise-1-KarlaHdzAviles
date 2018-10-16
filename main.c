/*this program helps the user to accommodate the numbers that are entering,
 * as well as accommodates them in reverse order as well.
 *
 * author:Karla Alexandra Hernandez Aviles
 * E-mail: A01411843@itesm.mx
 * Date: 15/10/2018
 * */
//library that the program use
#include <stdio.h>

int main() {
    //declaration of variable
    int c;

    //Ask to the user how many numbers wants to use
    printf("Welcome user, this program will help you, How many numbers would you like? \n");
    scanf("%i", &c);

    //declare variable within the numbers will be stored
    int num [c];

    //Ask for the numbers that the user wants
    for (int k=0; k<c; k++) {
        printf("Give me the numbers would you like:    \n");
        scanf("%i", &num[k]);
    }

    printf("\n");                                       // tells the program that after printing the first column, print the following

    //Print in a table the numbers in rhe correct order for the user
    printf("The numbers you gave me are: \n");
    for (int k=0; k<c; k++) {
        printf("\t%i", num[k]);                         // \t is a tabulator
    }
    printf("\n");
    printf("\n");

    //print to the user the numbers in the inverse order
    printf("The numbers you gave me in opposite order are: \n");
    for (int k=c; k>0; k--) {
        printf("\t%i", num[k-1]);
    }

    printf("\n");


    return 0;
}