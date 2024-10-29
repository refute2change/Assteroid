build: compile link clean

compile:
	g++ -c *.cpp -I".\Externals\include" -DSFML_STATIC

link:
	g++ *.o -o Asteroid -L".\Externals\lib" -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32 -mwindows

clean:
	rm *.o