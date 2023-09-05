import random

#Score placeholder
computer_score = 0
player_score = 0
draw = 0

#Choices
options = ["ROCK", "PAPER", "SCISSORS"]

#RPS Loop
while True:
    startup = input("Enter Rock/Paper/Scissors or Q to quit: ").upper()
    if startup == "Q":
        break

    if startup not in options:
        print("THAT'S NOT IN THE CHOICES.\n")
        continue

    #Computer Choice randomizer (0 = ROCK, 1 = PAPER, 2 = SCISSORS)    
    random_gen = random.randint(0, 2)
    computer_choice = options[random_gen]
    print(f"Computer picked {computer_choice}. You picked {startup}.")

    #PLAYER WIN CONDITION
    if startup == "SCISSORS" and computer_choice == "PAPER":
        player_score += 1
        print("You Won")
        continue
    elif startup == "PAPER" and computer_choice == "ROCK":
        player_score += 1
        print("You Won")
        continue
    elif startup == "ROCK" and computer_choice == "SCISSORS":
        player_score += 1
        print("You Won")
        continue

    #DRAW CONDITION:
    elif startup == "ROCK" and computer_choice == "ROCK":
        print("DRAW")
        draw += 1
        continue
    elif startup == "PAPER" and computer_choice == "PAPER":
        print("DRAW")
        draw += 1
        continue
    elif startup == "SCISSORS" and computer_choice == "SCISSORS":
        print("DRAW")
        draw += 1
        continue
    
    #COMPUTER WIN CONDITION
    else:
        computer_score += 1
        print("YOU LOST")
        continue

#END
while True: 
    print(f"\nScores:\nYour Wins: {player_score}\nComputer Wins: {computer_score}\nDraws: {draw}")
    end = input('Enter Q to end program: ').upper()

    if end == 'Q': print("Bye"), exit()
