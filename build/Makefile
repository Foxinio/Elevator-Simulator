include ../common.mk

THIS_SRC_DIR = ../$(SRC_DIR)

all: ObjectFactory.o OneElevatorManager.o IPhysicalCabin.o DefaultCabin.o DefaultPerson.o DefaultPeopleGenerator.o DefaultFloor.o FloorQueue.o

ObjectFactory.o: $(THIS_SRC_DIR)ObjectFactory.cpp $(THIS_SRC_DIR)ObjectFactory.h $(THIS_SRC_DIR)DefaultCabin.h $(THIS_SRC_DIR)DefaultFloor.h \
		$(THIS_SRC_DIR)DefaultPeopleGenerator.h $(THIS_SRC_DIR)DefaultPerson.h $(THIS_SRC_DIR)OneElevatorManager.h
	$(CXX) $(CXXFLAGS) -c -o ObjectFactory.o $(THIS_SRC_DIR)ObjectFactory.cpp

OneElevatorManager.o: $(THIS_SRC_DIR)OneElevatorManager.cpp $(THIS_SRC_DIR)OneElevatorManager.h
	$(CXX) $(CXXFLAGS) -c -o OneElevatorManager.o $(THIS_SRC_DIR)OneElevatorManager.cpp

IPhysicalCabin.o: $(THIS_SRC_DIR)IPhysicalCabin.cpp $(THIS_SRC_DIR)IPhysicalCabin.h $(THIS_SRC_DIR)ObjectFactory.h
	$(CXX) $(CXXFLAGS) -c -o IPhysicalCabin.o $(THIS_SRC_DIR)IPhysicalCabin.cpp

DefaultCabin.o: $(THIS_SRC_DIR)DefaultCabin.cpp $(THIS_SRC_DIR)DefaultCabin.h $(THIS_SRC_DIR)ObjectFactory.h
	$(CXX) $(CXXFLAGS) -c -o DefaultCabin.o $(THIS_SRC_DIR)DefaultCabin.cpp

DefaultPerson.o: $(THIS_SRC_DIR)DefaultPerson.cpp $(THIS_SRC_DIR)DefaultPerson.h $(THIS_SRC_DIR)ObjectFactory.h
	$(CXX) $(CXXFLAGS) -c -o DefaultPerson.o $(THIS_SRC_DIR)DefaultPerson.cpp

DefaultPeopleGenerator.o: $(THIS_SRC_DIR)DefaultPeopleGenerator.cpp $(THIS_SRC_DIR)DefaultPeopleGenerator.h $(THIS_SRC_DIR)ObjectFactory.h
	$(CXX) $(CXXFLAGS) -c -o DefaultPeopleGenerator.o $(THIS_SRC_DIR)DefaultPeopleGenerator.cpp

DefaultFloor.o: $(THIS_SRC_DIR)DefaultFloor.cpp $(THIS_SRC_DIR)DefaultFloor.h
	$(CXX) $(CXXFLAGS) -c -o DefaultFloor.o $(THIS_SRC_DIR)DefaultFloor.cpp 

FloorQueue.o: $(THIS_SRC_DIR)FloorQueue.cpp $(THIS_SRC_DIR)FloorQueue.h
	$(CXX) $(CXXFLAGS) -c -o FloorQueue.o $(THIS_SRC_DIR)FloorQueue.cpp

clean:
	rm -rf *.o
