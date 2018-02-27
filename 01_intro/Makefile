include ../Makefile.common

DOTOPT := -Gsize=11.7,8.2 -Gratio=fill -Goverlap=false

all:
	dot 01_flow.dot $(DOTOPT) -Tpng -o 01_flow.png
	TEXINPUTS=..//: pdflatex $(TEX_SRC)
