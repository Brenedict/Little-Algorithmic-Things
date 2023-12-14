// Problem solving with richard

/*Write a program that will input a non-negative integer and 
would display the prime factors of the given integer 
(Ex: Enter..: 15 ; Prime Factors: 1 3 5)*/

def prime(n):
    factors = []
    cnt = 1

    if n > 0:
        while cnt <= n:
            if n % cnt == 0:
                factors.append(cnt)
                n = n / cnt
                cnt += 1
            else:
                cnt += 1

        for x in factors:
            if x != 2 and x%2 == 0 and x<20:
                factors.remove(x)    
    return factors
    
n = int(input("Enter a Number: ")) 
prime(n)    

if len(prime(n)) > 1:
    print(f"The Prime Factor's of {n}")
    print(prime(n))
else:
    print(f"The Prime Factor of {n}")
    print(prime(n))
                
