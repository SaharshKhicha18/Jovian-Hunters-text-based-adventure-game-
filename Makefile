FLAGS = -pedantic-errors -std=c++11

gamecharacters.o: Jovian.h gamecharacters.cpp
	g++ $(FLAGS) -c gamecharacters.cpp

hospital.o: Jovian.h hospital.cpp
	g++ $(FLAGS) -c hospital.cpp

ammunationshop.o: Jovian.h ammunationshop.cpp
	g++ $(FLAGS) -c ammunationshop.cpp

pawnshop.o: Jovian.h pawnshop.cpp
	g++ $(FLAGS) -c pawnshop.cpp

war.o: Jovian.h war.cpp
	g++ $(FLAGS) -c war.cpp

randomevents.o: Jovian.h randomevents.cpp
	g++ $(FLAGS) -c randomevents.cpp

savegame.o: Jovian.h savegame.cpp
	g++ $(FLAGS) -c savegame.cpp

loadgame.o: Jovian.h loadgame.cpp
	g++ $(FLAGS) -c loadgame.cpp

gamemanual.o: Jovian.h gamemanual.cpp
	g++ $(FLAGS) -c gamemanual.cpp

main.o: Jovian.h main.cpp
	g++ $(FLAGS) -c main.cpp

main: gamecharacters.o hospital.o ammunationshop.o pawnshop.o war.o randomevents.o savegame.o loadgame.o gamemanual.o main.o
	g++ $(FLAGS) gamecharacters.o hospital.o ammunationshop.o pawnshop.o war.o randomevents.o savegame.o loadgame.o gamemanual.o main.o -o main

clean:
	rm -rf main *.o

.PHONY: clean
