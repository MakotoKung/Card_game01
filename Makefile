all: compile link

compile:
	g++ -c main.cpp -I"C:\Users\Makoto\Documents\SFML_C++\SFML-2.6.2\include" -DSFML_STATIC  

link:
	g++ main.o -o main -L"C:\Users\Makoto\Documents\SFML_C++\SFML-2.6.2\lib" -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32 -mwindows -lsfml-main

clean:
	rm -f main *.o