#include <stdio.h>
void main()
{
    FILE *fptr;
    char name[20];
    int age;
    float salary;
    fptr = fopen ("emp.doc", "w"); /*open for writing*/
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    //printf("Enter the name\n");
    //scanf("%s", name);
    //fprintf(fptr, "Name = %s\n", name);
    system("color fa");
    fprintf(fptr,"\t\t\t\tBIO DATA\n\nNAME:ABU SAHADAT MOHAMMAD JAHIDUL ALAM MOJUMDER\n\nFATHER:ANOWAR AHMED MOJUMDER\n\nMOTHER:NASIMA AKTHER\n\nPERMANENT ADDRESS:\nVILL-HARIPUR,\nPOST-HARIPUR BAZAR,\nTHANA-CHHAGOLNAIYA,\nDIS-FENI.\n\nPRESENT ADDRESS-JOHORA VILLA,\nBALUCHARA ABASHIK,\nNORTH KULGOAN,\nBAYEZID BOSTAMI,\nPOSTCODE-4214,\nCHITTAGONG\n\nDATE OF BIRTH-06-10-1991\n\nBLOOD GROUP-A+\n\nNATIONALITY-BANGLADESHI\n\nRELIGION-ISLAM\n\nLANGUAGE-BENGALI,HINDI,ENGLISH");
    return 0;
    fclose(fptr);
}
