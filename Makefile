.PHONY: clean All

All:
	@echo "----------Building project:[ CompilerErrors - Debug ]----------"
	@cd "CompilerErrors" && "$(MAKE)" -f  "CompilerErrors.mk"
clean:
	@echo "----------Cleaning project:[ CompilerErrors - Debug ]----------"
	@cd "CompilerErrors" && "$(MAKE)" -f  "CompilerErrors.mk" clean
