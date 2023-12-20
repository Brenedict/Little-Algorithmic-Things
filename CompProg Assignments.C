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
