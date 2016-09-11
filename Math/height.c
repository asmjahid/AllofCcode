#include <stdio.h>

int MainMenu(void);
int GetInches(void);
int ConvertInchesToFeet(int inches);
void OutputFeet(int feet);
int ConvertFeetToInches(int feet);
void OutputInches(int inches);
void InchesToFeet(void);
void FeetToInches(void);

int main(void)
{
    int choice;
do{
    system("cls");
    choice = MainMenu();
    switch(choice)
    {
    case 1: InchesToFeet();
            break;

    case 2: FeetToInches();
            break;

    case 3: printf("Exit Program");
            exit(0);

    default: printf("Wrong Choice...");
    getch();
    }
}while(choice !=3);
}

void InchesToFeet(void)
{
     int inches, feet;

     inches = GetInches();
     feet = ConvertInchesToFeet(inches);
     OutputFeet(feet);
}

void FeetToInches(void)
{
     int inches, feet;

     feet = GetFeet();
     inches = ConvertFeetToInches(feet);
     OutputInches(inches);
}

int GetInches(void)
{
    int in;
    printf("Enter a value in inches: ");
    scanf("%d", &in);
    return in;
}

int ConvertInchesToFeet (int inches)
{
    int feet;
    feet = inches/12;
    return feet;
}

int ConvertFeetToInches (int feet)
{
    int inches;
    inches = feet*12;
    return inches;
}

int GetFeet(void)
{
    int ft;
    printf("Enter a value in feet: ");
    scanf("%d", &ft);
    return ft;
}

void OutputFeet (int feet)
{
     printf("\nEquivalent in feet: %d", feet);
     getch();
}

void OutputInches (int inches)
{
     printf("\nEquivalent in inches: %d", inches);
     getch();
}

int MainMenu(void)
{
    int choice;

    printf("MAIN MENU");
    printf("\n1. Convert from Inches To Feet");
    printf("\n2. Convert from Feet To Inches");
    printf("\n3. Exit");
    printf("\n\nYour choice: ");
    scanf("%d", &choice);
    return choice;
}
