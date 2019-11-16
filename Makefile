ARCH := c.tar.gz
LIT  := literature

all: $(LIT).pdf
	for a in $$(ls); do \
        if [ -d $$a ]; then \
            echo "========================= $$a ======================"; \
            $(MAKE) -C $$a; \
        fi; \
    done;
	@echo "Done!"

$(LIT).pdf: $(LIT).tex
	pdflatex $<

clean:
	for a in $$(ls); do \
        if [ -d $$a ]; then \
            echo "========================= $$a ======================"; \
            $(MAKE) -C $$a clean;\
        fi; \
    done;
	rm -rf $(LIT).pdf
	rm -rf $(ARCH)
	@echo "Done!"

.PHONY: arch

arch: $(ARCH)

$(ARCH):
	find . -name \*.pdf -print0 | tar -czvf $(ARCH) --null -T -

include Makefile.common
