DOTOPT := -Gsize=11.7,8.2 -Gratio=fill -Goverlap=false
TEX_SRC = $(wildcard *.tex)

all:
	dot 01_flow.dot $(DOTOPT) -Tpng -o 01_flow.png
	TEXINPUTS=..//: pdflatex $(TEX_SRC)
