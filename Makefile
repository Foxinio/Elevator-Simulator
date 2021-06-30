include common.mk

all: $(TARGET)

sim: $(TARGET)
	./$(TARGET)

compile-os: 
	$(MAKE) -C build


$(TARGET_LIB): $(BUILD_DIR)ObjectFactory.o $(BUILD_DIR)OneElevatorManager.o $(BUILD_DIR)IPhysicalCabin.o $(BUILD_DIR)DefaultCabin.o \
		$(BUILD_DIR)DefaultPerson.o $(BUILD_DIR)DefaultPeopleGenerator.o $(BUILD_DIR)DefaultFloor.o $(BUILD_DIR)FloorQueue.o 
	for FILE in $^; do \
		ar crvs $(TARGET_LIB) $$FILE; \
	done

compile-lib: compile-os $(TARGET_LIB)

$(TARGET): $(TARGET).cpp $(TARGET_LIB) $(SRC_DIR)ObjectFactory.h 
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).cpp $(TARGET_LIB)

%.html: %.md
	markdown $< > $@

clean:
	rm -rf $(TARGET) $(TARGET_LIB) *.o *.out *.html; \
	$(MAKE) clean -C build

