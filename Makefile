.PHONY: clean All

All:
	@echo "----------Building project:[ VariableSizedArray - Debug ]----------"
	@cd "VariableSizedArray" && "$(MAKE)" -f  "VariableSizedArray.mk"
clean:
	@echo "----------Cleaning project:[ VariableSizedArray - Debug ]----------"
	@cd "VariableSizedArray" && "$(MAKE)" -f  "VariableSizedArray.mk" clean
