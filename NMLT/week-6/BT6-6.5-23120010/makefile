objects = main.o interface.o implement.o \
          ./bai-1/bai-1.o ./bai-1/io-1.o ./bai-1/solve-1.o \
		  ./bai-2/bai-2.o ./bai-2/io-2.o ./bai-2/solve-2.o \
		  ./bai-3/bai-3.o ./bai-3/io-3.o ./bai-3/solve-3.o \
		  ./bai-4/bai-4.o ./bai-4/io-4.o ./bai-4/solve-4.o

#default goal
main.exe        : $(objects)
	g++ $(objects) -o main.exe

#main
main.o          : main.cpp interface.h
interface.o     : interface.cpp interface.h
implement.o: implement.cpp implement.h interface.h \
                  ./bai-1/bai-1.h ./bai-2/bai-2.h \
				  ./bai-3/bai-3.h ./bai-4/bai-4.h

#Bai 1
bai-1.o         : bai-1.cpp bai-1.h io-1.h solve-1.h
io-1.o          : io-1.cpp io-1.h
solve-1.o       : solve-1.cpp solve-1.h

#Bai 2
bai-2.o         : bai-2.cpp bai-2.h io-2.h sovle-2.h
io-2.o          : io-2.cpp io-2.h
solve-2.o       : solve-2.cpp solve-2.h

#Bai 3
bai-3.o         : bai-3.cpp bai-3.h io-3.h solve-3.h
io-3.o          : io-3.cpp io-3.h
solve-3.o       : solve-3.cpp solve-3.h

#Bai 4
bai-4.o         : bai-4.cpp bai-4.h io-4.h solve-4.h
io-4.o          : io-4.cpp io-4.h
solve-4.o       : solve-4.cpp solve-4.h

clean          ::
	rm main.exe *.o **/*.o