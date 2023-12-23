//Number 11
//Write a program segment for the following using (a) if statement and (b) switch ..case statement: If the value of the integer variable ME is less than 2 and greater than 0, assign the value of ME to integer variable YOU. If the value of ME is 5, multiply variables THEY and THEM and assign the results to variable YOU. If the value of ME is 2, increment YOU by 1. If the value of ME is 7, decrement YOU by 4. Any other value of ME would display the value of YOU.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int ME, YOU, THEY, THEM;
    
    if (ME < 2 && ME > 0) {
        YOU = ME;
    }
    
    else if (ME == 2) {
        YOU += 1;
    }
    
    else if (ME == 5) {
        YOU = THEY * THEM;
    }
    
    else if (ME == 7) {
        YOU -= 4;
    }
    
    else {
        printf("%d", YOU);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int ME, YOU, THEY, THEM;
    
    switch (ME) {
        case 1:
            YOU = ME;
            break;
        
        case 2:
            YOU += 1;
            break;
            
        case 5: 
            YOU = THEY * THEM;
            break;
            
        case 7;
            YOU -= 4;
            break;
            
        default:
            printf("%d", YOU);
            break;
    }
    
    return 0;
}

**************************************************************************************************************************************************************
//Number 12
//Write a program segment for the following using case. If the value of the character variable CHAR_VAR is ‘A' or ‘a', add 1 to integer variable JETT. If the value of CHAR_VAR is ‘B' or ‘b', subtract Y from Z giving the value to JETT. If the value of CHAR_VAR is ‘C' or ‘c', subtract Z from Y giving the value to JETT. Any other value would result to an error message “INVALID ENTRY”.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char CHAR_VAR;
    int JETT, Z, Y;
    
    switch (CHAR_VAR) {
        case 'A':
        case 'a':
            JETT += 1;
            break;
        case 'B':
        case 'b':
            JETT = Z - Y;
            break;
        case 'C':
        case 'c':
            JETT = Y - Z;
            break;
        default:
            printf("INVALID ENTRY");
    }
    return 0;
}

**************************************************************************************************************************************************************
//Number 13
// Complete the program to produce the following output: The value of a is 25. The value of a is 10. The value of a is 0.

#include <stdio.h>

int main() {

   int a=5, c=0;
    x:
        c++;
        if(c==1) {
            a=a*a;
            goto x;
        }
    
        else 
            if (c==2) { 
                a = a + a;
                goto x;
            }
            else {
    	        if (c == 3) 
    	        a /= 2;
    	       
    	        else if (c == 4) 
    	        a -= 15;
    	        
                else
                a -= 10;
                
                printf("The value of a is %d\n", a);
                
                if (c < 5)
                    goto x;
            }         

   return 0;
}

**************************************************************************************************************************************************************
//EXERCISE 4-1

// Child == 0-12 (C), Teenager == 13-19 (T), Adult >= 20 (A)
int Age;
printf("Enter Your Age: ");
scanf("%d", &Age);
if (Age >= 0 && Age <= 12) {
	printf("\nC");
}
else if (Age >= 13 && Age <= 19) {
	printf("\nT");
}
else if (Age >= 20) {
	printf("\nA");
}
else {
	printf("\nInvalid Input");
}

**************************************************************************************************************************************************************
//EXERCISE 4-2

//Write a program that will input the diameter of the pizza and its price
//A. Determine Area of Pizza = PI*(diameter/2)^2
//B. Price by the divided area
double Diameter, Radius, Price, Area, PricePerArea;
const double PI = 3.14159;

printf("Enter the diameter of the Pizza in inches: ");
scanf("%lf", &Diameter);

printf("\nEnter the price of the Pizza: P");
scanf("%lf", &Price);

Radius = (Diameter/2);
Area = PI * (Radius*Radius);
PricePerArea = Price/Area;

printf("\n--Pizza Details--\n");
printf("Diameter: %.2lf inches\n", Diameter);
printf("Price: P%.2lf\n", Price);
printf("Area: %.2lf square inches\n", Area);
printf("Divided Price: P%lf per square inch\n", PricePerArea);

**************************************************************************************************************************************************************
//EXERCISE 4-3

int a, b, c, placeholder;
printf("Enter Three Integers: ");
scanf("%d %d %d", &a, &b, &c);

if (c > b) {
	placeholder = c;
	c = b;
	b = placeholder;
}

if (b > a) {
	placeholder = a;
	a = b;
	b = placeholder;
}

if (c > b) {
	placeholder = c;
	c = b;
	b = placeholder;
}

printf("\nDescending Order: {%d, %d, %d}", a, b, c);

**************************************************************************************************************************************************************
//EXERCISE 4-5

int N1, N2, M, flag = 0;
printf("-- Determine numbers from range (N1) to (N2) divisible by (M) --\n\n");
printf("Enter a integer (N1): ");
scanf("%d", &N1);
printf("Enter second integer (N2): ");
scanf("%d", &N2);
printf("Enter divisible identifier (M): ");
scanf("%d", &M);

printf("\nNumbers from '%d' to '%d' that are divisible by '%d': [ ", N1, N2, M);
for (N1 ; N1 <= N2 ; N1++) {
	if (N1 % M == 0) {
		printf("%d ", N1);
		flag++;
	}
}
printf("]");
printf("\n\nNumber of items divisible by %d: %d Numbers", M, flag);

**************************************************************************************************************************************************************
//EXERCISE 4-6

int daysLate, itemPrice, returnItem, total = 0;
	
printf("Which Item are you returning:\n1. VHS\n2. CD\n\nEnter: ");
scanf("%d", &returnItem);

if (returnItem == 1 || returnItem == 2) {
	printf("\nNumber of days late since due date?\n");
	scanf("%d", &daysLate);
	
	//setting of the price of item: CD = 50, VHS = 35
	if (returnItem == 1) {
		itemPrice = 35;
	}
	else {
		itemPrice = 50;
	}
	
	//checking of amount of days late
	if (daysLate <= 2 && daysLate > 0) {
		total = 10; 
	}
	else if (daysLate <= 4 && daysLate > 2) {
		total = 15; 
	}
	else if (daysLate == 5) {
		total = 20; 
	}
	else if (daysLate >= 7) {
		total = itemPrice; 
	}
	else {
		printf("\nInvalid input");
	}
	
	//showing users bill
	printf("\nLate fine fees: $%d", total);
}

else {
	printf("\nItem not in thw options!");
}

**************************************************************************************************************************************************************
//EXERCISE 4-7

int A, i, test;
	
printf("Enter a non-negative integer to factor: ");
scanf("%d", &A);

if (A < 0) {
	printf("%d is not a non-negative integer!", A);
}
else {
	printf("Prime Factors of the Integer: ");
	for (i=1;i<=A;i++) {
		test = A % i;
		if (test == 0) {
			printf("%d ", i);
			A = A / i;
		}
	}
}

**************************************************************************************************************************************************************
//CASE STUDY 1

int A, i, test, product;
	
printf("Enter a non-negative integer to factor: ");
scanf("%d", &A);

if (A < 0) {
	printf("%d is not a non-negative integer!", A);
}
else {
	printf("Product of Primes: ");
	for (i=1;i<=A;) {
		test = A % i;
		if (test == 0) {
			printf("%d%s", i, (i<A)?"*" :"");
			A = (A / i);
			product *= i;
			(i==1)?i++ :i ;
		}
		else {
			i++;
		}
	}
	
	printf(" = %d", product);
}

**************************************************************************************************************************************************************
//CASE STUDY 2

int i, A;
unsigned long long total;

printf("Enter a non-negative integer for factorial: ");
scanf("%d", &A);

if (A < 0) {
	printf("%d is not a non-negative integer!", A);
}

else {
	printf("\nFactorial: ");
	for (A;A>=1;A--) {
		printf("%d", A);
		total *= A;
		
		printf("%s", (A>1)?"x" :"");
	}
}
printf("\nTotal = %.0llu", total);

**************************************************************************************************************************************************************
//CASE STUDY 3

#include <stdio.h>

int DWARF(int total, float half, int temp) {
	(total/2 > half)? printf("\n%d is DWARF", temp) :printf("\n%d is NOT DWARF", temp);
	return 0;
}

int main() {
    int A, i, test, x, temp, total;
    float half;
	    
    printf("Input: ");
    scanf("%d", &A);
    temp = A;
    if (A < 0) {
		printf("%d is not a non-negative integer!", A);
	}
	
	else {
	    for (x=0;x<2;x++) {
		    if (x == 0) {
				printf("Factors are: ");
			}
			else {
				printf("Sum of its factor: ");
			}
			for (i=1;i<=A;i++) {
				test = A % i;
				if (test == 0) {
					printf("%d ", i);
					A = A / i;
					total += i;
					
					//For sum of its factor segment
					printf("%s", (x==1 && i < A)?"+ " :"");
				}
				
			}
			A = temp;
			printf("%s", (x==0)?"\n":"");
		}
		
		half = temp/2.0;
		
		
		printf("= %d", total/2);
		printf("\nHalf of the number: %d/2 = %.2f", temp, half);
		
		DWARF(total, half, temp);
	}
    return 0;
}

