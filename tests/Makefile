CC         = g++
INCLUDES   = -IC:/msys/include
CFLAGS     = $(INCLUDES) -O0 -c -Wall -pedantic -std=c++11 -fexec-charset=UTF-8 -finput-charset=UTF-8 -D_GLIBCXX_HAVE_BROKEN_VSWPRINTF

LIB_PATHS  = -L../lib -L lib -LC:/msys/lib
LIBS       = -static -lglfw_mock -lgtest_all -lstub
LDFLAGS    = ${LIB_PATHS} ${LIBS}

find = $(foreach dir,$(1),$(foreach d,$(wildcard $(dir)/*),$(call find,$(d),$(2))) $(wildcard $(dir)/$(strip $(2))))

SOURCES_LIB       = $(call find, src, *.cpp)
OBJECTS_LIB       = $(SOURCES_LIB:.cpp=.o)

TARGET     = bin/lib_glfw_mock_tests.exe


all: check


check: $(TARGET)
	@echo ""
	./$(TARGET)
	@echo ""


$(TARGET): $(OBJECTS_LIB)
	$(CC) $(OBJECTS_LIB) -o $@ $(LDFLAGS)


.cpp.o:
	$(CC) ${CFLAGS} $< -o $@


clean:
	rm -f $(OBJECTS_LIB)
	rm -f $(TARGET)
	rm -f gmon.out

