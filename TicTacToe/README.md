Implement a simple Tic-Tac-Toe game for a board of arbitrary size. It should be able to receive user input, i.e., where a user token (‘X’ or ‘O’) has been put, and return the state of the game as a result:  did any of the players win, is it a draw, or is the game still ongoing?


Solution hints:
- A good design will most likely encapsulate the game state in a class and expose a method or two to allow placing tokens and retrieving game status.


- An example can be a class with a single public method “placeToken(token, row, column)” that returns a string from the set (“FIRST PLAYER WON”, “SECOND PLAYER WON”, “DRAW”, “ONGOING”).


- Think about handling exceptions - what if the user provides an invalid token, or places it outside the board or over a previous token? Do you raise an error (a.k.a throwing an exception), or return a different result?


- What if the user provides the same token twice in a row - does your design treat this as an exception, or do you leave the question of turn integrity to the user? Note that it’s perfectly okay for the solution not to handle this scenario as an error, as long as the decision was made consciously.


