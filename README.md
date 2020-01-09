# Network-Wide Mafia (tmp name)
By: Max Walden and Winston Peng  

## Project Description
A server will connect several clients to let them play a game of mafia.  
Players:  
If 5 computers, one mafia, one detective, and the rest are citizens  
If 7 or more computers, one mafia, one detective and the rest are citizens  
How rounds work:  
Mafia can choose to kill one person. They are given 15 secs to converse exclusively
with the other mafia member if there are two. Killed people leave the game  
Detective can investigate one person to see if they are mafia or not.  
Each round lasts 5 minutes, during which the players converse, and find out who to kill  
After 5 minutes, the players must vote. Voting early is allowed. If there is no majority, no one is killed. If all mafia are killed the game ends  
Game can also end if the number of mafia outnumber or equal the amount of non-mafia  

## Technical Design
### Topics Covered
Networking -- Connect multiple clients together with a forking server  
Allocating Memory -- Keep track of the roles of each player, their nicknames, and their status (dead or alive)  
### Extra features
Files -- Keep track of message history, will also be organized by what each player said. Detective will be able to access message history between mafia, but usernames are blurred
