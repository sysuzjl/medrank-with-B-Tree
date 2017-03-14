SRCS = src/DataStruct.cpp src/util.cpp src/BTree.cpp src/blockFile.cpp src/MedRank.cpp
OBJS = $(SRCS:.cpp=.o)
CP = g++

medrank: $(OBJS)
	$(CP) -o medrank $(OBJS) src/main.cpp

DataStruct.o: src/DataStruct.h src/DataStruct.cpp
	$(CP) -c src/DataStruct.cpp

util.o: src/util.h src/util.cpp
	$(CP) -c src/util.cpp

blockFile.o: src/blockFile.h src/blockFile.cpp
	$(CP) -c src/blockFile.cpp

BTree.o: src/BTree.h src/BTree.cpp
	$(CP) -c src/BTree.cpp

MedRank.o: src/MedRank.h src/MedRank.cpp
	$(CP) -c src/MedRank.cpp

clean:
	-rm $(OBJS) medrank