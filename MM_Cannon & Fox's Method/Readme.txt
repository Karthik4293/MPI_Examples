The following are the commands to compile the program and to link the match libraries,

mpicc -c cannon.c
mpicc -o cannon cannon.o -lm

After the above step the executable output is generated.

The matrix values are generated using matgenerator, I have a set of pre-generated values in Data folder. Extract the folder and place it in the root directory along with the program.
