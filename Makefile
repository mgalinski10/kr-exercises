CC = gcc
CFLAGS = -g

GREEN = \033[32m
YELLOW = \033[33m
RED   = \033[31m
RESET = \033[0m

OUT_DIR = $(dir $(FILE))build
OUT     = $(OUT_DIR)/$(basename $(notdir $(FILE)))

.PHONY: build clean

build:
ifndef FILE
	@echo "$(RED)[ ERROR ] $(RESET)File is not defined."
	@echo "$(YELLOW)[ INFO ] $(RESET)Usage: make build FILE=chapter_1/hello.c"
endif
	@mkdir -p $(OUT_DIR)
	@$(CC) $(CFLAGS) $(FILE) -o $(OUT)
	@printf "$(GREEN)[ OK ] $(RESET)Built $(OUT)\n"

clean: 
	@echo "Deleting compiled files..."
	@rm -rf chapter_*/build/*
	@echo "$(GREEN)[ OK ] $(RESET)All compiled files are deleted."