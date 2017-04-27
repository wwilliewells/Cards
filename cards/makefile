all: sports_card
sports_card: sports_card.o
	g++ -g -o sports_card sports_card.o
sports_card.o: sports_card.cpp sports_card.h
	g++ -g -c sports_card.cpp
clean:
	rm -f sports_card.o
wipe: clean
	rm -f sports_card.exe
