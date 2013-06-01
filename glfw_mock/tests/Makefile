CC         = g++
INCLUDES   = -IC:/msys/include -IC:/boost/include
CFLAGS     = $(INCLUDES) -c -Wall -DGLEW_STATIC -pedantic -g -std=c++11 -pg -D GLM_COMPONENT_CXX11 -DSTAND_ALONE -fexec-charset=UTF-8 -finput-charset=UTF-8

LIB_PATHS  = -LC:/msys/lib -LC:/boost/lib -L../
LIBS       = -lglfw_mock -lgmon -lboost_unit_test_framework-mgw48-mt-1_53 -g -pg
LDFLAGS    = ${LIB_PATHS} ${LIBS} -v


SOURCES    = \
  main.cpp


OBJECTS    = $(SOURCES:.cpp=.o)
TARGET     = lib_glfw_mock_tests.exe

all: check

check: $(SOURCES) $(TARGET)
	$(TARGET) --log_level=test_suite
	@echo ""


$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)


.cpp.o:
	$(CC) ${CFLAGS} $< -o $@ $(LDFLAGS)

clean:
	rm -f $(OBJECTS)
	rm -f $(TARGET)
	rm -f gmon.out

