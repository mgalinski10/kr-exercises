CC        = gcc
CFLAGS    = -g -std=c99

BUILD_DIR = build

GREEN  = \033[32m
YELLOW = \033[33m
RED    = \033[31m
RESET  = \033[0m

OUT = $(BUILD_DIR)/$(subst /src/,/,$(basename $(FILE)))

.PHONY: build clean

build:
ifndef FILE
	@printf "$(RED)[ ERROR ] $(RESET)File is not defined.\n"
	@printf "$(YELLOW)[ INFO ] $(RESET)Usage: make build FILE=chapter_1/src/hello.c\n"
	@exit 1
else
	@mkdir -p $(dir $(OUT))
	@$(CC) $(CFLAGS) $(FILE) -o $(OUT)
	@printf "$(GREEN)[ OK ] $(RESET)Built $(OUT)\n"
endif

clean:
	@printf "Deleting compiled files...\n"
	@rm -rf $(BUILD_DIR)/*
	@printf "$(GREEN)[ OK ] $(RESET)All compiled files are deleted.\n"