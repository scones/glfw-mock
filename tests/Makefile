CC         = g++
INCLUDES   = -IC:/msys/include
CFLAGS     = $(INCLUDES) -O0 -c -Wall -pedantic -std=c++11 -fexec-charset=UTF-8 -finput-charset=UTF-8

LIB_PATHS  = -L../lib -LC:/msys/lib
LIBS       = -static -lglfw_mock -lgtest_all
LDFLAGS    = ${LIB_PATHS} ${LIBS}


SOURCES    = \
  src/main.cpp\
  ../src/stubber.cpp \
  src/open_window.cpp \
  src/init.cpp \
  src/set_key_callback.cpp \
  src/swap_buffers.cpp \
  src/get_window_param.cpp \
  src/terminate.cpp \
  src/open_window_hint.cpp \
  src/set_window_title.cpp \
  src/enable.cpp \
  src/disable.cpp \
  src/set_char_callback.cpp \
  src/set_mouse_button_callback.cpp \
  src/set_mouse_pos_callback.cpp \
  src/set_mouse_wheel_callback.cpp \
  src/get_key.cpp \
  src/get_mouse_button.cpp \
  src/get_mouse_pos.cpp \
  src/set_mouse_pos.cpp \
  src/get_mouse_wheel.cpp \
  src/set_mouse_wheel.cpp \
  src/get_video_modes.cpp \
  src/get_desktop_mode.cpp \
  src/poll_events.cpp \
  src/wait_events.cpp \
  src/get_time.cpp \
  src/set_time.cpp \
  src/get_version.cpp


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

