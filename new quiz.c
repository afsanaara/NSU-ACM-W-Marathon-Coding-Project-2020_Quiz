#include<stdio.h>


int main()

{
    //Participants
    printf("=========The Name of Contestants=========\n");

    printf("1. Shaiely Ahasan\n");
    printf("2. Sarafat Ali Adir\n");
    printf("3. Fabe Islam\n");



    //Selected Contestant
    int digit;
    printf("Enter a Digit: ");
    scanf("%d",&digit);
    switch(digit)
    {
    case 1:
    {


        printf("The Selected Contestant For The Quiz is Shaiely Ahasan\n\n");
        break;
    }
    case 2:
    {


        printf("The Selected Contestant For The Quiz is Sarafat Ali Adir\n\n");
        break;
    }
    case 3:
    {


        printf("The Selected Contestant For The Quiz is Fabe Islam\n\n");
        break;
    }
    }

    //Quiz Started
    printf("           LET'S THE QUIZ BEGIN!        \n");

    printf("=========Choose Your Desire Topic=========\n");
    printf("1. Bangladesh\t\t \t \t   2.Sports\t\t\t\n");
    printf("3. International\t\t \t   4.Entertainment\n");

    //Selected topic
    int option;
    printf("Enter a Option: ");
    scanf("%d",&option);
    switch(option)
    {
    case 1:
    {


        printf("The Contestant Has Chosen Topic 1- Bangladesh\n");
        break;
    }
    case 2:
    {


        printf("The Contestant Has Chosen Topic 2- Sports\n");
        break;
    }
    case 3:
    {


        printf("The Contestant Has Chosen Topic 3- International\n");
        break;
    }
    case 4:
    {


        printf("The Contestant Has Chosen Topic 4- Entertainment\n");
        break;
    }
    default:
        {

        printf("INVALID OPTION");
        }
    }





    return 0;

}
