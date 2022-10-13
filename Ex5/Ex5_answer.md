# Ex5 Answer
## Exercise 4.5: Determine the result of the following expressions.

1. (a) -30 * 3 + 21 / 5
2. (b) -30 + 3 * 21 / 5
3. (c) 30 / 3 * 21 % 5
4. (d) -30 / 3 * 21 % 4

**answer**
- (a) -30 * 3 + 21 / 5 is equal to -90 + 4 = -86
- (b) -30 + 3 * 21 / 5 is equal to -30 + 61 / 5 = -30 + 12 = -18
- (c) 30 / 3 * 21 % 5 is equal to 10 * 21 % 5 = 210 % 5 = 0
- (d) -30 / 3 * 21 % 4 is equal to -10 * 21 % 4 = -210 % 4 = -2 


## 4.17: Explain the difference between prefix and postfix increment.

**answer**
- prefix: The prefix version avoids unnecessary work. It increments the value and returns the incremented version.
- postfix:  The postfix operator must store the original value so that it can return the unincremented value as its result. 

## 4.34: Given the variable definitions in this section, explain what conversions take place in the following expressions:
bool flag; char cval;
short sval; unsigned short usval;
int ival; unsigned int uival;
long lval; unsigned long ulval;
float fval; double dval;
1. (a) if (fval)
2. (b) dval = fval + ival;
3. (c) dval + ival * cval;

**answer**
- convert fval from float to bool, if fval = 0, then false; otherwise true.
- convert ival from int to float, add them together, then result convert from float to double.
- convert cval from char to int, add them together, then result convert from int to double, then add 2 double.
