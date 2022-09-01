import time
import os
from player import HumanPlayer, RandomComputerPlayer
from gameplay import TicTacToe

"""
Tictactoe game using OOP
"""

def main(game, x_player, o_player, print_game=True):
    if print_game:              #if print_game is set to True
        game.print_board_nums() #then print the game board with 
        time.sleep(.8)          #the placeholders within
    token = 'X' #the default first player is X

    # as long as there are still empty spots on the board, the 
    # player corresponding to the appropriate token is assigned
    while game.empty_spots():
        if token == 'X':
            spot = x_player.get_move(game)
        else: #spot=x_player.get_move(game) if token=='X' else o_player.get_move(game)
            spot = o_player.get_move(game)

        if game.make_move(spot, token):
            if print_game:
                print(f"{token} makes a move to spot {spot+1}") #this will print 1-9 instead of 0-8
                game.print_board()
                print('\n')
            
            if game.current_winner: # if the current_winner has been set to a token
                                    # since current_winner was initialized as None.
                if print_game:
                    print(f"{token} Wins!")
                return token #ends the loop and exits the game
            #alternate the tokens, switching the player who plas next
            token = 'O' if token == 'X' else 'X'
            
        time.sleep(0.8) #a small break to make things easier to read

    if print_game:
        print("It's a tie!")


if __name__ == "__main__":
    os.system("cls")
    print("\nWelcome to Tic-Tac-Toe!")
    replay = 'Y' #initialised for while loop
    while replay == 'Y':
        mode = ' ' #initialised for while loop
        while mode != 'A' and mode != 'B' and mode != 'C':
            print("\nHow do you wish to play?")
            print("A. Player against Computer")
            print("B. Player_1 against Player_2")
            print("C. Computer_1 against Computer_2")
            mode = input("\t\t\t\t==> ").upper()

            if mode == 'A':
                choice = input("\nOK... Do you want to be X or O? ").upper()
                if choice == 'O':
                    o_player = HumanPlayer('O')
                    x_player = RandomComputerPlayer('X')
                else:
                    x_player = HumanPlayer('X')
                    o_player = RandomComputerPlayer('O')
            elif mode == 'B':
                print("Player_1 = X\nPlayer_2 = O\n")
                x_player = HumanPlayer('X')
                o_player = HumanPlayer('O')
            elif mode == 'C':
                print("\nSit Back, Relax and Enjoy the Show :)")
                time.sleep(2.5)
                x_player = RandomComputerPlayer('X')
                o_player = RandomComputerPlayer('O')
            else:
                print("Invalid choice. Try again")
        #end of while loop
        t = TicTacToe()
        main(t, x_player, o_player, print_game=True)
        replay = input("\nDo you want to play again?(Y/N): ").upper()
        os.system("cls")
    #end of while loop
    print("Bye! Come Back Soon")
