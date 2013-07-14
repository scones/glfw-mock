CC         = g++
INCLUDES   = -IC:/msys/include
CFLAGS     = $(INCLUDES) -O3 -c -Wall -pedantic -std=c++11 -fexec-charset=UTF-8 -finput-charset=UTF-8

LIB_PATHS  = -L../lib -LC:/msys/lib
LIBS       = -static -lglfw_mock -lgtest_all
LDFLAGS    = ${LIB_PATHS} ${LIBS}


SOURCES    = \
  src/main.cpp\
  ../src/stubber.cpp \
  src/open_window.cpp


OBJECTS    = $(SOURCES:.cpp=.o)
TARGET     = bin/lib_glfw_mock_tests.exe


all: check


check: $(SOURCES) $(TARGET)
	@echo ""
	./$(TARGET)
	@echo ""


$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)


.cpp.o:
	$(CC) ${CFLAGS} $< -o $@


clean:
	rm -f $(OBJECTS)
	rm -f $(TARGET)
	rm -f gmon.out

