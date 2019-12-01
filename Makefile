CC = g++
CFLAGS = -std=c++14 -g -Wall -Wextra -fsanitize=address,undefined -lgtest -lgtest_main
SRC = $(wildcard *.cpp)
OUTS = $(SRC:%.cpp=%.out)

%.out: %.cpp
	$(CC) $(CFLAGS) $< -o $@

ALL: $(OUTS)

clean:
	rm -rf $(OUTS)

