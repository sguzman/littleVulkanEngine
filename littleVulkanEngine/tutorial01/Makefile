CFLAGS = -std=c++23
LDFLAGS = `pkg-config --static --libs glfw3` -lvulkan

a.out: *.cpp
	g++ $(CFLAGS) -o a.out *.cpp $(LDFLAGS)

.PHONY: test clean

test: a.out
	./a.out

clean:
	rm -f a.out
