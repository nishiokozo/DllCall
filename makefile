
all:	dllfunc.dll main.exe

main.exe: main.cpp
	g++ main.cpp -o main.exe
	
dllfunc.dll: dllfunc.cpp
	g++ dllfunc.cpp -o dllfunc.dll -shared

clean:
	rm -f *.o
	rm -f *.dll
	rm -f *.exe