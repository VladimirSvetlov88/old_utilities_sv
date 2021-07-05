CC=g++

CFLAGS= -fPIC -std=c++11 -c 
LDFLAGS=-shared 

SOURCES= utilities_version_class.cpp utilities_bit.cpp utilities_file.cpp utilities_log.cpp utilities_math.cpp utilities_namespace.cpp utilities_sys.cpp utilities_text.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=libutilities_sv.so

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(EXECUTABLE)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

