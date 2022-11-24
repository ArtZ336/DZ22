#pragma once

#ifndef INTEGER
void fillInt(int ar[], int n);
void showInt(int ar[], int n);
void minInt(int ar[], int n);
void maxInt(int ar[], int n);
void sortInt(int ar[], int n);
void editInt(int ar[], int n);

#define fill fillInt;
#define show showInt;
#define min minInt;
#define max maxInt;
#define sort sortInt;
#define edit editInt;

#elif FLOAT
void fillFloat(float ar[], float n);
void showFloat(float ar[], float n);
void minFloat(float ar[], float n);
void maxFloat(float ar[], float n);
void sortFloat(float ar[], float n);
void editFloat(float ar[], float n);

#define fill fillFloat;
#define show showFloat;
#define min minFloat
#define max maxFloat
#define sort sortFloat;
#define edit editFloat;


#elif CHAR
void fillChar(char ar[], char n);
void showChar(char ar[], char n);
void minChar(char ar[], char n);
void maxChar(char ar[], char n);
void sortChar(char ar[], char n);
void editChar(char ar[], char n);

#define fill fillChar;
#define show showChar;
#define min minChar;
#define max maxChar;
#define sort sortChar;
#define edit editChar;
#endif
