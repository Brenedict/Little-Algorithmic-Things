import random as r

balance = 0
colors = ["RED", "ORANGE", "YELLOW", "GREEN", "BLUE", "VIOLET"]

def deposit():
    while True:
        global balance
        depbal = input("\nEnter amount to deposit: ")
        if depbal.isdigit():
            depbal = int(depbal)
            if depbal > 0:
                balance += depbal 
                break
            else:
                print("\n!! Enter a valid deposit amount !!")     
        else:
            print("\n!! Enter a valid deposit amount !!")        

def betting():
    global balance
    while True:
        print(f"\nCurrent Balance: {balance}")
        bet = input("Enter a bet: $")
        if bet.isdigit():
            bet = int(bet)
            if bet <= balance:
                if bet > 0:
                    balance -= bet
                    return bet
                else:
                    print("\n!! Enter a valid bet amount !!")
            else:
                print("\n!! You're betting more than your balance !!")   
        else:
            print("\n!! Enter a valid bet amount !!")

def winCondition(guess, results):
    flag = 0
    if guess in results:
        flag = 1
        for j in range(3):
            if guess == results[j]:
                flag += 1
    return flag

def play(bet_amount):
    results = []
    global balance 
    global plays
    while True:
        print("\n~~~~~~~~~~~~~~~~~~~~~~~~~~( OPTIONS )~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
        print("\n-----[ RED | ORANGE | YELLOW | GREEN | BLUE | VIOLET ]-----\n")
        guess = input("Your Guess: ").upper()
        if guess in colors:
            for i in range(3):
                test = r.randint(0, 5)
                results.append(colors[test])
        
            print("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n")
            print("\n~~~~~~~~~~~~~~~~~~~~~~~~~~( RESULTS )~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
            print(f"\n>> [ {results[0]} | {results[1]} | {results[2]} ]\n")
            multiplier = winCondition(guess, results)
            bet_amount *= multiplier
            balance += bet_amount

            if multiplier >= 1:
                print(f">> YOU WON ${bet_amount}!")

            else:
                print(f">> YOU LOST!")

            print("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
            break

        else:
            print("!! Not in the options !!\n")

#GAME START 

#GAME FIRST OPEN
print("Welcome to the Color Game!")
deposit()
user_bet = betting()
play(user_bet)

#MAIN GAME LOOP
while True:
    while balance <= 0:
        print("\nYour current balance is $0")
        options = input("1. Deposit\n2. Quit\n\n> ")
        if options.isdigit():
                options = int(options)
                if options == 1 or options == 2:
                    if options == 1:
                        deposit()
                        user_bet = betting()
                        play(user_bet)
                        break
                    elif options == 2:
                        print(f"\nThank you for playing.\nCashing out ${balance}")
                        quit()
                else:
                    print("!! Not in the options !!")    
        else:
            print("!! Not in the options !!")

    while balance > 0:    
        print(f"\nCurrent Balance: ${balance}")
        play_options = input("1. Bet\n2. Deposit\n3. Quit\n\n> ")
        if play_options.isdigit():
                play_options = int(play_options)
                if play_options >= 1 or play_options <= 3:
                    if play_options == 1:
                        user_bet = betting()
                        play(user_bet)
                        break
                    elif play_options == 2:
                        deposit()

                    elif play_options == 3:
                        print(f"\nThank you for playing.\nCashing out ${balance}")
                        quit()
                else:
                    print("\n!! Not in the options !!")    
        else:
            print("\n!! Not in the options !!")
