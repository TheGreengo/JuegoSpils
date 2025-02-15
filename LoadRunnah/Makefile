CXX       := clang++
SRC       := main.cpp
LIB       := raylib
LIB_PATH  := ../raylib/build/raylib/
INC_PATH  := ../raylib/build/raylib/include/ 
FRAMEWORK := Cocoa
FRAMEWORK += IOKit
FRAMEWORK += CoreVideo
FRAMEWORK += OpenGL
FRM_FLAGS := $(addprefix -framework ,$(FRAMEWORK))
STD       := -std=c++11
FLAGS     := -l$(LIB) -L$(LIB_PATH) -I$(INC_PATH) $(STD) $(FRM_FLAGS)

game:
	@ $(CXX) -o $@ $(SRC) $(FLAGS)

clean:
	@ rm game
