PLATFORM ?= PLATFORM_DESKTOP

ifeq ($(PLATFORM),PLATFORM_DESKTOP)

    ifeq ($(OS),Windows_NT)
        PLATFORM_OS = WINDOWS
    else
        UNAMEOS := $(shell uname)

        ifeq ($(UNAMEOS),Linux)
            PLATFORM_OS = LINUX
        endif

        ifeq ($(UNAMEOS),Darwin)
            PLATFORM_OS = OSX
        endif

        ifeq ($(UNAMEOS),FreeBSD)
            PLATFORM_OS = BSD
        endif
    endif

endif


# Compiler
CC = g++

ifeq ($(PLATFORM_OS),OSX)
    CC = clang++
endif

ifeq ($(PLATFORM_OS),BSD)
    CC = clang++
endif


# Files
TARGET = main
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)


# Compile flags
CFLAGS = -std=c++17 -Wall -Wextra -g

# Link flags
ifeq ($(PLATFORM_OS),WINDOWS)
    LDFLAGS = -lraylib -lgdi32 -lwinmm
endif

ifeq ($(PLATFORM_OS),LINUX)
    LDFLAGS = -lraylib -lm -lpthread -ldl -lrt -lX11
endif

ifeq ($(PLATFORM_OS),OSX)
    LDFLAGS = -L/opt/homebrew/lib -lraylib -framework OpenGL -framework Cocoa -framework IOKit
endif


all: $(TARGET)


$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET) $(LDFLAGS)


%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@


run: $(TARGET)
	./$(TARGET)


clean:
	rm -f $(TARGET) $(OBJS)