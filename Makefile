SHELL=/bin/bash

all:
	for a in $$(ls); do \
        if [ -d $$a ]; then \
            echo "========================= $$a ======================"; \
            $(MAKE) -C $$a; \
        fi; \
    done;
	@echo "Done!"
clean:
	for a in $$(ls); do \
        if [ -d $$a ]; then \
            echo "========================= $$a ======================"; \
            $(MAKE) -C $$a clean;\
        fi; \
    done;
	@echo "Done!"