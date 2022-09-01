import time
from player import HumanPlayer, RandomComputerPlayer

"""
Tictactoe game using OOP
"""

class TicTacToe:
    def __init__ (self):
        self.board = [' ' for _ in range(9)] #list to represent 3x3 board
        self.current_winner = None  #keeps track of whether 
                                    # there has been a winner, and who it was.
    
    def print_board (self): #an empty board
        for row in [self.board[i*3 : (i+1)*3] for i in range(3)]:
            print('| ' + ' | '.join(row) + ' |')

    @staticmethod
    def print_board_nums(): #board with placeholder
        # now we determine which number corresponds with which spot
        # e.g | 0 | 1 | 2 |
        number_board = [[str(i) for i in range(j*3, (j+1)*3)] for j in range(3)]
        for row in number_board:
            print('| ' + ' | '.join(row) + ' |')
    
    # To know the available moves after every turn
    def available_moves(self): #returns a list of indices of the available spots
        return [i for i,spot in enumerate(self.board) if spot == ' ']

        # This list comprehension basically expands to the below:
        #moves = []
        #for (i,spot) in enumerate(self.board):
        #    if spot == ' '
        #        moves.append(i)
        
    def empty_spots(self): #checks if there ar empty spots on the board
        return ' ' in self.board
        #boolean that returns true if there are free spots
        
    def num_empty_spots(self): #returns the number of available moves left on board
        return len(self.available_moves())
        # this can also be done by:
        #return self.board.count(' ')

    #checks if the game has been won and defines how it happens
    def winner(self, spot, token):
    
        #check rows
        row_index = spot // 3   # all 3 elements along the same row 
                                # should have the same whole number 
                                # division of 3 (i.e 0//3 == 1//3 == 2//3 == 0) 
        row = self.board[row_index*3 : (row_index+1)*3]
        #given the index, get the row i.e print('row', row)
        if all([r==token for r in row]) #all spots in a row have a particular token
            return True

        #check columns
        col_index = spot % 3    # all 3 elements along the same column
                                # should have the same value of modulus 3 
                                # (i.e 0%3 == 3%3 == 6%3 == 0) 
        column = [self.board[col_index + i*3] for i in range(3)] #print('col', col)
        if all ([c==token for c in column]):
            return True

        #checks diagonals
        #for diagonal
        #
        
         s




    def make_move(self, spot, token):
        #if the move is valid, make the move and return true
        if self.board[spot] == ' '   # if spot on board is empty
            self.board[spot] = token # then assign the next token there

            #check if someone won the game after their turn
            if self.winner(spot, token):    # if the game has been won,
                self.current_winner = token # The current_winner takes the token
                                            # of the player that played last
            return True
        return False





def play(game, x_player, o_player, print_game=True):
    if print_game:              #if print_game is set to True
        game.print_board_nums() #then print the game board with 
                                #the placeholders within
    token = 'X' #the default first player is X

    # as long as there are still empty spots on the board, the 
    # player corresponding to the appropriate token is assigned
    while game.empty_slots():
        if token = 'X':
            spot = x_player.get_move(game)
        else:
            spot = o_player.get_move(game)

        if game.make_move(spot, token):




if __name__ = "__main__":
    x_player = HumanPlayer('X')
    o_player = RandomComputerPlayer('O')
    t = TicTacToe()
    play(t, x_player, o_player, print_game=True)
