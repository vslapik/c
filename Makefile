include Makefile.common

SHELL=/bin/bash

all:
	for a in $$(ls); do \
        if [ -d $$a ]; then \
            echo "========================= $$a ======================"; \
            $(MAKE) -C $$a $@; \
        fi; \
    done;
	pdflatex literature.tex
	@echo "Done!"

clean: clean_tex clean_obj
	for a in $$(ls); do \
        if [ -d $$a ]; then \
            echo "========================= $$a ======================"; \
            $(MAKE) -C $$a clean;\
        fi; \
    done;
	@echo "Done!"

arch:
	@find . -name \*.pdf -print0 | tar -czvf c.tar.gz --null -T -

