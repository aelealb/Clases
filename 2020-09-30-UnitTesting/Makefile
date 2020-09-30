all: example1.x

test: test_factorial.x

%.o: %.cpp
	g++ -c $<

example1.x: example1.o factorial.o
	g++ $^ -o $@

test_factorial.x: test_factorial.o factorial.o
	g++ $^ -o $@

clean:
	rm -f *.x *.o a.out
