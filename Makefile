CXX = x86_64-w64-mingw32-g++
#CXX = g++ # Linux
RunMascota : bin/mascota
	./bin/mascota

bin/mascota : src/mascota.cpp include/Mascota1/Mascota.hpp
	$(CXX) src/mascota.cpp -o bin/mascota -I include/Mascota1

cleanMascota : bin/mascota
	rm bin/mascota