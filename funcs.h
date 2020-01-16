struct user {
    char name[256]; //Will be displayed before each message sent from server
    char ip[15];  //Holds ip address. Will be used to keep track of clients
    int is_alive;  //Can only send messages if != 0
    char role;  //'d' = detective, 'm' = mafia, 'c' = citizen. Features are restricted depending on role
};
