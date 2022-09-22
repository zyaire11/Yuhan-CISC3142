# Task1
Exercise 2.1: What are the differences between int, long, long long, and short? Between an unsigned and a signed type? Between a float and a double?

**answer**
1. int : at least 16 bit integer
2. long: long at least 32 bits
3. long long: at least 64 bits
4. short: at least 16 bit
5. The types int, short, long, and long long are all signed.
6. unsigned can only represent numbers not less than zero, we need signed to represent negative numbers
7. Typically, floats are represented in one word (32 bits), doubles in two words (64 bits)
   
Exercise 2.2: To calculate a mortgage payment, what types would you use for the rate, principal, and payment? Explain why you selected each type

**answer**
I will use double or float, because it contains decimal number

Exercise 2.3: What output will the following code produce?

**answer**

32

4294967264

32

-32

0

0

Exercise 2.10: What are the initial values, if any, of each of the following variables?

**answer**

1. int local_int is not uninitialized, it is 4201099
1. global_int is 0
1. global_str value is  empty string
1. local_str value is empty string

Exercise 2.12: Which, if any, of the following names are invalid? (a) int double = 3.14; (b) int _; (c) int catch-22; (d) int 1_or_2 = 1; (e) double Double = 3.14;

**answer**

 invalid name, double can not be variable name

_ is a valid name

Catch-22 is a invalid name

 1_or_2 is a invalid name

Double is a valid name

Exercise 2.13: What is the value of j in the following program? int i = 42; int main() { int i = 100; int j = i; }

**answer**

The value of j is 100

Exercise 2.14: Is the following program legal? If so, what values are printed?

**answer**

Program is legal, it will print 

100 45

Exercise 2.17: What does the following code print?

**answer**

It will print

10 10

Exercise 2.27: Which of the following initializations are legal? Explain why

**answer**

(a) invalid initialization, &r = 0 we can not assign 0 to it, r must refer to an object

(b)Legal

(c)Legal

(d)Legal

(e)Legal

(f)illegal, r2 is a reference that cannot be const.

(g)Legal

Exercise 2.28: Explain the following definitions. Identify any that are illegal

**answer**

(a)illegal, we must to initialize cp

(b)illegal, we must to initialize p2

(c)illegal, we must to initialize ic

(d)illegal, we must to initialize p3

(e)legal
