
all:	foo.dll main.exe

main.exe: main.cpp
	g++ main.cpp -o main.exe
	
foo.dll: foo.cpp
	g++ foo.cpp -o foo.dll -shared

clean:
	rm -f *.o
	rm -f *.dll
	rm -f *.exe