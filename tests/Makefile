CC         = g++
INCLUDES   = -IC:/msys/include
CFLAGS     = $(INCLUDES) -O0 -c -Wall -pedantic -std=c++11 -fexec-charset=UTF-8 -finput-charset=UTF-8 -D_GLIBCXX_HAVE_BROKEN_VSWPRINTF

LIB_PATHS  = -L../lib -LC:/msys/lib
LIBS       = -static -lglfw_mock -lgtest_all
LDFLAGS    = ${LIB_PATHS} ${LIBS}


SOURCES    = \
  src/main.cpp\
	../src/stubber.cpp \
	src/create_window.cpp \
	src/default_window_hints.cpp \
	src/destroy_window.cpp \
	src/extension_supported.cpp \
	src/get_clipboard_string.cpp \
	src/get_current_context.cpp \
	src/get_cursor_pos.cpp \
	src/get_framebuffer_size.cpp \
	src/get_gamma_ramp.cpp \
	src/get_input_mode.cpp \
	src/get_joystick_axes.cpp \
	src/get_joystick_buttons.cpp \
	src/get_joystick_name.cpp \
	src/get_key.cpp \
	src/get_monitor_name.cpp \
	src/get_monitor_physical_size.cpp \
	src/get_monitor_pos.cpp \
	src/get_monitors.cpp \
	src/get_mouse_button.cpp \
	src/get_primary_monitor.cpp \
	src/get_proc_address.cpp \
	src/get_time.cpp \
	src/get_version_string.cpp \
	src/get_version.cpp \
	src/get_video_mode.cpp \
	src/get_video_modes.cpp \
	src/get_window_attrib.cpp \
	src/get_window_monitor.cpp \
	src/get_window_pos.cpp \
	src/get_window_size.cpp \
	src/get_window_user_pointer.cpp \
	src/hide_window.cpp \
	src/iconify_window.cpp \
	src/init.cpp \
	src/joystick_present.cpp \
	src/make_context_current.cpp \
	src/poll_events.cpp \
	src/restore_window.cpp \
	src/set_char_callback.cpp \
	src/set_clipboard_string.cpp \
	src/set_cursor_enter_callback.cpp \
	src/set_cursor_pos_callback.cpp \
	src/set_cursor_pos.cpp \
	src/set_error_callback.cpp \
	src/set_framebuffer_size_callback.cpp \
	src/set_gamma_ramp.cpp \
	src/set_gamma.cpp \
	src/set_input_mode.cpp \
	src/set_key_callback.cpp \
	src/set_monitor_callback.cpp \
	src/set_mouse_button_callback.cpp \
	src/set_scroll_callback.cpp \
	src/set_time.cpp \
	src/set_window_close_callback.cpp \
	src/set_window_focus_callback.cpp \
	src/set_window_iconify_callback.cpp \
	src/set_window_pos_callback.cpp \
	src/set_window_pos.cpp \
	src/set_window_refresh_callback.cpp \
	src/set_window_should_close.cpp \
	src/set_window_size_callback.cpp \
	src/set_window_size.cpp \
	src/set_window_title.cpp \
	src/set_window_user_pointer.cpp \
	src/show_window.cpp \
	src/swap_buffers.cpp \
	src/swap_interval.cpp \
	src/terminate.cpp \
  src/wait_events.cpp \
	src/window_hint.cpp \
	src/window_should_close.cpp




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

