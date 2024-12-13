all: compile link

compile:
	g++ -c main.cpp -I"C:\Users\Makoto\Documents\SFML_C++\SFML-2.6.2\include" -DSFML_STATIC  

link:
	
	g++ main.o -o main -L"C:\Users\Makoto\Documents\SFML_C++\SFML-2.6.2\lib" -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32  -lsfml-main
#when link error add -mwindows in above line
clean:
	rm -f main *.o