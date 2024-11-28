//Write a C Program to print Hello on the first line and Students in the second line

#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Hello\nStudents");
    getch();
}


/*
NOTE:: Remember, using another printf is not going to print students on the next line. 
We have to use ‘\n’ which is a special character also known as new line character. 
We can experiment other such special characters, known as escape sequences. 

---------------------------------------------Escape Sequences------------------------------------------------
(1). \n        =      New line character     
(2). \b        =      Same as backspace key 
(3). \t        =      Same as tab key 
(4). \\        =      to print backslash single time
(5). \”        =      to use double quotes as printable character
(6). \r        =      carriage return, it moves cursor at the starting place of the current line
(7).
(8).
 

 We can experiment these special character by using them in printf and see the output.
 



































*/