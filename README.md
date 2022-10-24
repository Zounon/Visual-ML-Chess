## The Goal of Visual ML Chess 
A interactive chess game where one can 'see' what the computer is thinking

### Requriements 
- SFML (v2.5.1)

### How to Run
0. ensure SFML is installed 
1. compile `main.cpp` with `g++ -c main.cpp'
2. link the SFML libraries with `g++ main.o -o chessapp -lsfml-system  -lsfml-graphics -lsfml-window`
3. run the app with `./chessapp` 

Note: the `./rb` script does these 3 steps to use it instead 

` chmod +x rb `

` ./rb `


#### SOFAR
- got SFML's "hello world" running 

#### TODO Next
- find open source chess images
- display the board and the chess peices 
- write make file 


./chessapp
