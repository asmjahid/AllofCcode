/**************************************************************/

/*Program Name: Filecopy Header File                          */

/*Who: Prashanth S R                                          */

/*Date:11/02/2006                                             */

/**************************************************************/



/****************************************************************/

/* HEADER FILES*/

#include<stdio.h>

#include<string.h>

/****************************************************************/



/****************************************************************/

/* MACROS*/

#define FILENAME 500

#define DIRNAME 500

#define FAILURE -1

#define SUCCESS 0

#define SRCPATH "D:\Prashanth\Music"

#define FILEPATH "D:\Prashanth\HomeProjects\SearchFiles\FileDetails.txt"

#define LOGPATH "D:\Prashanth\HomeProjects\SearchFiles\Logfile.txt"

#define FILETYPE 25

#define TRUE 1

#define FALSE 0

#define FLOPPY_DRIVE "A:"

#define C_DRIVE "C:"

#define D_DRIVE"D:"

#define E_DRIVE"E:"

#define F_DRIVE"F:"

/****************************************************************/



/****************************************************************/

/* MODULAR VARIABLES*/

char SrcDir[DIRNAME];/* Holds the source path name */

char LogPath[DIRNAME];/* Holds the log path name */

char FileDet[DIRNAME];/* Holds the filedetails path name */

FILE *LogFile;/* File pointer for Logfile */

FILE *LogFileDet;/* File pointer for Filedetails */

/****************************************************************/



/****************************************************************/

/* GLOBAL STRUCTURES*/

typedef struct

{

char FileType_ca[FILETYPE];

long FileSize;

char Filename_ca[FILENAME];

}FileStruct;



FileStruct *gFileStruct;



/****************************************************************/

/* FUNCTION PROTOTYPES*/

void InitialiseBegin();

void LogMessage(char *);

long Get_Filedesc(char *);

void LoadFileStruct(char *);

void SearchFileStruct(FileStruct *, long);

void CreateFileDet(FileStruct *);

void OpenDir(char *);

void FindFiles(char *, char *);

void CheckValid_Drive(char);

/****************************************************************/





/**************************************************************/

/*Program Name: Search Utility                                */

/*Who: Prashanth S R                                          */

/*Date:11/02/2006                                             */

/**************************************************************/



/**************************************************************/

/*Header Files  */

/**************************************************************/

#include<stdio.h>

#include<string.h>

#include<dirent.h>

#include<sys/types.h>

#include<sys/stat.h>

#include<stdlib.h>

#include "SearchFile.h";

/**************************************************************/

/*Global Variables  */

/**************************************************************/

short SubFolder_s = FALSE;/* Flag to indicate if subfolders exists */

short Searchflag_s = FALSE;/* Flag to indicate searched files

exists(eg

:mp3, mpeg) */

int CountFiles_i = FALSE;/* Counts the number of searched files */

char dir;/* Holds the Drive name */

char AnoSearch_flag[10];/* Holds the status of another search */

char Filetype[20];

FileStruct *FFileStruct;/* Global pointer for populating file names

and size */

/**************************************************************/

main()

{

memset (Filetype ,
