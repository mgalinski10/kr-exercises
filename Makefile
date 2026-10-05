INFO := \033[33m[INFO]\033[0m
OK := \033[32m[OK]\033[0m
ERROR := \033[31m[ERROR]\033[0m

.PHONY: help

help: 
	@echo "$(INFO) Available targets: "
	@echo "$(INFO) bookmark		- check which section did I read last time. Have to be manually updated."

bookmark:
	@echo "$(INFO) Section 2.9, make exercise"