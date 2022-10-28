/*
https://www.geeksforgeeks.org/stack-set-2-infix-to-postfix/
operand: A,B,C,D,E
opertor: +,-,^,/

rules:
    1. priorites of operator: ^=> higest piority
                            // *,/=> next piority
                                +,-=> lowest piority
    
    2. no two opertaotr of same piority can stay higher in stack column
    3. lowest piority can not to placed before highest piority.
*/