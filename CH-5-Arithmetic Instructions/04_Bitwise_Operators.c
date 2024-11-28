/*
---------------------------Bitwise Operators (&, |, ^, ~, >>, <<)----------------------------------------------

Operators that perform on bits (0 or 1) are known as bitwise operators.  

There are six bitwise operators.
1.Bitwise AND (&)
2.Bitwise OR  (|)
3.Bitwise XOR (^)
4.Bitwise NOT (~)
5.Right Shift >>
6.Left Shift  <<
 
1.Bitwise AND (&) 
0&0 = 0  
0&1 = 0 
1&0 = 0 
1&1 = 1 

2.Bitwise OR ( | ) 
0|0 = 0 
0|1 = 1 
1|0 = 1 
1|1 = 1 

3.Bitwise XOR (^)
0^0 = 0 
0^1 = 1
1^0 = 1 
1^1 = 0 

4.Bitwise NOT (~) 
~0 = 1 
~1 = 0

***To solve bitwise operators &, | and ^, we need to convert both the operands into their binary equivalent. 
Represent in 32 bits representation. (integer takes 4 bytes in memory) 
Perform operation between every pair of corresponding bits according to the behaviour described above. 
#includde<stdio.h>
int main()
{
int x;
x=5&12;
printf("%d",x);
return 0;
}
Output:
The output is 4 
Bitwise AND applies on 5 and 12. We need to convert them in binary.
                                                                   128 64 32 16 8 4 2 1          (2 ki power 0=1,2 ki power 2=4)
5  =00000000 00000000 00000000 00000101                              0  0  0  0 0 1 0 1                 
12 =00000000 00000000 00000000 00001100                                         1 1 0 0
&   ————————————-----------------------                             _____________________
4  =00000000 00000000 00000000 00000100                                         0 1 0 0           Ans is 4


5.Right Shift >> and Left Shift  <<
In the case of left or right shift operation,We need to convert only left operand into its binary equivalent. 
For example: 
In the expression 12>>2; we need to convert 12 into its binary and perform right shift two times. 
#include<stdio.h>
int main()
{
 x=12>>2;
 printf("%d",x);
 return 0;
}
Convert 12 into binary and shift bits to their right 2 times. This makes last two bits out and two new bits (always 0) append at the left.

12=00000000 00000000 00000000 00001100 
Right shift two times 
3= 00000000 00000000 00000000 00000011 
In the case of left shift, everything is same except that the shifting of bits is towards left.
#include<stdio.h>
int main()
{
 int x;
 x=12<<2;
 printf("%d",x);
 return 0;
}
Convert 12 into binary and shift bits to their left 2 times. This makes last two left most bits out and two new 
bits (always 0) append at the right. 
12=00000000 00000000 00000000 00001100 
Left shift two times 
48=00000000 00000000 00000000 00110000 

















































*/