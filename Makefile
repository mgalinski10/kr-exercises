INFO := \033[33m[INFO]\033[0m
OK := \033[32m[OK]\033[0m
ERROR := \033[31m[ERROR]\033[0m

.PHONY: help

help: 
	@echo "$(INFO) Info message."
	@echo "$(OK) Success message."
	@echo "$(ERROR) Error message."