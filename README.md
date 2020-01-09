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
Processes -- We're using a bloody forking server  
Networking -- Connect multiple clients together with a forking server  
Shared Memory -- Keep track of the roles of each player, their nicknames, and their status (dead or alive)  
Signals -- Timed signals to keep track of the amount of time players get for each round (using alarm())  
Named Pipes -- Each subprocess will connect to named pipe. Pipe collects messages and sends them back  
### Data Structures
``` c
struct user {
    char name[256]; //Will be displayed before each message sent from server
    char ip[15];  //Holds ip address. Will be used to keep track of clients
    int is_alive;  //Can only send messages if != 0
    char role;  //'d' = detective, 'm' = mafia, 'c' = citizen. Features are restricted depending on role
};
```
## Roles
Max  
Setting up messaging system  

Winston  

## Timeline
Deadline: 1/17
