build:
	g++ -o calc main.cpp

run: build
	./calc

install: build
	cp calc /usr/local/bin
clean:
	rm calc
uninstall:
	rm /usr/local/bin/calc