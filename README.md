Noah Fulton


2. An overflow occurred at the number 256 and the sum was -32640. I found this with the comparison
while (num <= sum).

3. Long overflowed at num 65536 and sum -214745088

4. Overflow was detected at num = 35 using test factorial(num) != INFINITY

5. At number 171 factorial started returning the value inf which means out of value range. I used check while (factorial(n) != INFINITY).

6. I checked the mystery num, but it would only result in 1. I used 
do while (mysterySum(n) != mysterySum(n+1))

7. The error was the output included a 4.4 even though results were supposed to be
less than 4.4. Float appears to see the result 4.4 as less than a solidified 4.4. It sees a 4.399999 repeating which is less than a solid 4.4

8. The logical error does not occur. Double uses a different system to store decimal
bits that lends better to comparisons