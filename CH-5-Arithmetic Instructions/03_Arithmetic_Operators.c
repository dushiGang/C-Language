/*
----------------------------------Arithmetic Operators (* , /, %, +, -)-----------------------------------------

1. Priority of *,  /, % is higher than +, - operators. 
2. Unlike mathematics priority of *, / and % are same. Similarly, priority of + and – is same. 
3. * is used for multiplication 
4. / is used for division 
5. % is called modulus operator and used to get remainder 
6. + is for addition 
7. - is for subtraction 
8. If the single expression has more than one arithmetic operators of same priority, they will be 
evaluated from left to right in the expression. This is called associativity rule. 

Find the output of the following program:
#include<stdio.h>
int main()
{
int a,b,c,d;
a=3+4;
b=3-4;
c=3*4;
d=3/4;
printf("%d %d %d %d",a,b,c,d);
return 0;
}
Output is: 
7 -1 12 0 
* The value of a is 7 which is the result of 3+4 
* The value of b is -1 which is the result of 3-4 
* The value of c is 12 which is the result of 3*4 
* The value of d is 0 which is the result of 3/4. This may surprise you a bit.  
    o In C, numbers are of two types, real and integer.  
    o When we operate two integers, result will be integer only 
    o So 3/4 is 0 instead of 0.75 (which should be mathematically) 
    o Simply discard decimal point and digits after decimal point, only consider the integer part 
    (left of decimal point) 
* At least one operand is real, the result will be real 
     o The result of 3.0/4 is 0.75 
     o The result of 3/4.0 is 0.75 
     o The result of 3.0/4.0 is 0.75 
* Someone might have this confusion that what if we take variable of type float or double to store the result of
 3/4, would it leads to the mathematically correct result. 
#include<stdio.h>
int main()
{
float d;
d=3/4;
printf("%f",d);
}
 
The output of above program is 0.000000 
o The result contains decimal representation due to %f format specifier 
o Since in the expression d=3/4, divide operator has higher precedence than assignment operator, division 
performs first. 3 and 4 both are integers therefore outcome can only be integer value. Resulting expression 
becomes d=0;

--------------------------------------------Modulus Operator--------------------------------------------------

Modulus operator is used to find remainder value and can be worked only on integer operands. 

* Observe the result of following operations

1. 3%2  = 1 
Dividing 3 by 2, We will get 1 as a remainder

2. 5%2  = 1 
Dividing 5 by 2, we will get 1 as a remaind

3. 3%4 = 3 
When dividend is smaller than the divisor, the remainder is always the smaller one.
Jab bhi chota number left mein vhi Ans hoga.

4. 2%5  = 2 
2 is smaller than 5, thus the result is 2

5.15%5 = 0 
Perfect division always gives 0 as a remainder. This can be used to test divisibility.
Remainder 0 bachna matlab 15 5 se divisible hai.

6. 91%10 = 1 
Dividing any number by 10 always give last digit as a remainder
(We need not to be a genius to understand this concept)

7.    5%2         1
     -5%2        -1
      5%-2        1
     -5%-2       -1
jab bhi (-)sign lga ho to sabse phle use ignore karke solve kro ans aaya 1.
Ab agar numerator mein (-)sign hai to ans Negative hoga - sign lga do.
Denominator mein sign kuch bhi ho koi farak nhi padta keval Numerator ka sign dekhna hai.

8. 3.5%2 = Error 
Kyunki dono operands Integer hone chaiye.




































































































*/