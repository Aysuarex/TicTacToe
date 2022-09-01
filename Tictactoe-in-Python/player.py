import math
import random

"""
functions that define characteristics of different players.
It allows human players as well as random computer players.
"""

class Player:
    def __init__(self, token) #token is either 'X' or 'O'
        self.token = token

    def get_move (self, game)
        pass

class RandomComputerPlayer(Player):
    def __init__ (self, token)
        super().__init__(token)
    
    def get_move (self, game):
        # the computer selects a random spot on the board
        # out of the available spaces and returns the index
        # as its spot
        spot = random.choice(game.available_moves())
        return spot

class HumanPlayer(Player):
    def __init__ (self, token)
        super().__init__(token)
    
    def get_move (self, game):
        #these attributes are initialized for the loop
        valid_spot = False #is the chosen spot available?
        move = None

        while not valid_spot: #while valid_spot is still false
            spot = input(f"{self.letter}'s turn. Input move (1-9): ")
        
            try:
                move = int(spot)
                #if the spot chosen is valid, then 
                # set attr. valid_spot to True
                if move not in game.available_moves():
                    raise ValueError
                valid_spot = True
            
            except ValueError:
                print("Invalid spot. Try again")
        
        return (move-1) #This is not return move because we want
                        # the board to be numbered 1-9 and not 0-8
        
        
