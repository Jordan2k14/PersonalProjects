# Title - Rock, Paper, Scissors
# Language - Python
# Developer - Jordan Ukawoko
# Date - May 14th 2022


from random import randint 

# Firstly we are introducing the player
print("Welcome to my rock paper scissors game")
print("The rules are : ")
print("Scissors beats Paper")
print("Paper Beats Rock")
print("Rock beats Scissors")
print("Goodluck!")

# Creating a list of play options
option = ["Rock", "Paper", "Scissors"]

# Assing a random value to computer 
computer = option[randint(0,2)]

# Setting a player to false
player = False

while player == False:
    player = input("Rock, Paper, Scissors!")
    if player == computer:
        print("The result is a tie!")
    elif player == "Rock":
        if computer == "Paper":
            print("You lose!", computer, "beats the", player)
        else:
            print("Well done, you win", player, "beats the", computer)
    elif player == "Paper":
        if computer == "Scissors":
            print("You lose!", computer, "beats the", player)
        else:
            print("Well done, you win", player, "beats the", computer)
    elif player == "Scissors":
        if computer == "Rock":
            print("You lose!", computer, "beats the", player)
        else:
            print("Well done, you win", player, "beats the", computer)
    else:
        print("This play move does not exist, please check your spelling and try again")

    player = False
    computer = option[randint(0,2)]

            
