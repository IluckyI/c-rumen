SRC = $(wildcard ./src/*.cpp)
OBJ =  $(patsubst %.cpp,%.o,$(SRC))
CC  =  g++ 
TAG = ./bin/main
CFLAGS = -L./LIB -I./inc 


$(TAG):$(OBJ)
	$(CC) $(^) -o $(@) $(CFLAGS) 

    
	
clean:
	$(RM) $(OBJ)  $(TAG)