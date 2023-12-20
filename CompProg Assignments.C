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
