

main.exe: main.cpp dllfunc.h dllfunc.dll
	g++ main.cpp dllfunc.dll -o main.exe
	
dllfunc.dll: dllfunc.cpp dllfunc.h
	g++ dllfunc.cpp -o dllfunc.dll -shared

clean:
	rm -f *.o
	rm -f *.dll
	rm -f *.exe