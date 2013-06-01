CC         = g++
INCLUDES   = -IC:/msys/include -IC:/boost/include
CFLAGS     = $(INCLUDES) -c -Wall -pedantic -g -std=c++11 -pg -fexec-charset=UTF-8 -finput-charset=UTF-8

LIB_PATHS  = -LC:/msys/lib
LIBS       = -lgmon -g -pg
LDFLAGS    = ${LIB_PATHS} ${LIBS} -v


SOURCES    = \
	glfw.cpp \
	stubber.cpp

OBJECTS    = $(SOURCES:.cpp=.o)
TARGET     = libglfw_mock.dll

all: $(SOURCES) $(TARGET) check


$(TARGET): $(OBJECTS)
	$(CC) -shared $(OBJECTS) -o $@ $(LDFLAGS)

check: $(OBJECTS)
	make -C ./tests check

.cpp.o:
	$(CC) ${CFLAGS} $< -o $@ $(LDFLAGS)

clean:
	make -C ./tests clean
	rm -f $(OBJECTS)
	rm -f $(TARGET)
	rm -f gmon.out

