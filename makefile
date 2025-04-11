PROYECTO = primo
LIB := -lftxui-component -lftxui-dom -lftxui-screen
CXX := -std=c++17
SRC := src
INCLUDE := include
BIN := bin
EXE := $(BIN)/$(PROYECTO)

$(EXE) : $(SRC)/main.cpp
	c++ $< -o $@ $(LIB) $(CXX) -I$(INCLUDE)

run : $(EXE)
	./$<

clean : 
	rm $(BIN)/*

achivo: bin/archivo
	./$<

bin/archivo: scr/archivo.cpp
	c++ $< -o $@ -I$(INCLUDE)



binario: bin/binario
	./$<

bin/archivo: scr/binario.cpp
	c++ $< -o $@ -I$(INCLUDE)	