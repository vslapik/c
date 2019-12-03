#DOTOPT := -Gsize=11.7,8.2 -Gratio=fill
DOTOPT := -Gsize=13,9 -Gdpi=300 -Goverlap=false
TARGET := huffman
TARGET_SRC := $(TARGET).tex
TARGET_PDF := $(TARGET).pdf
DOTS = $(wildcard *.dot)
IMAGES = $(patsubst %.dot, %.png, $(DOTS))

$(TARGET_PDF): $(TARGET_SRC)
	make text.log
	make $(TARGET_SRC)
	pdflatex -jobname $(TARGET) $(TARGET_SRC)

text.log: text
	./huff text -c out --dump-tree --dump-table > text.log
	-rm out

.PHONY: debug clean

debug:
	echo '\\textbf{code} & \\texbf{frequency} & \\textbf{huffman} & \\textbf{code} & \\texbf{frequency} & \\texbf{huffman} \\' >> $@; \

$(TARGET_SRC): Makefile $(IMAGES) text.log
	echo "\\\input{../head.tex}" > $@; \
	echo "\\\title{Practice (Implementing Huffman archiver)}" >> $@; \
	echo "\\\begin{document}" >> $@; \
	echo '\\frame{\\titlepage}' >> $@; \
		echo "\\\begin{frame}" >> $@; \
		echo "Implement a huffman archiver with following interface:" >> $@; \
		echo "\\\lstinputlisting[breaklines,numbers=none,language=]{huff_options.txt}" >> $@; \
		echo "Implement a make-file for building the archiver with 'all' and 'clean' targets." >> $@; \
		echo "\\\end{frame}" >> $@; \
	echo "\\\begin{frame}[fragile]" >> $@; \
	echo "\\\justifying" >> $@; \
	cat text >> $@; \
	echo >> $@; \
	echo "\\\end{frame}" >> $@; \
	echo "\\\begin{frame}[fragile]" >> $@; \
	echo "\\\scriptsize" >> $@; \
	echo "\\\rowcolors{1}{oddrow}{evenrow}" >> $@; \
	echo "\\\begin{center}" >> $@; \
	echo "\\\begin{tabular}{llllll}" >> $@; \
	echo '\\textbf{code} & \\textbf{frequency} & \\textbf{huffman} & \\textbf{code} & \\textbf{frequency} & \\textbf{huffman} \\\\' >> $@; \
	cat text.log | sed '$$d' | sed '1d' | \
		sed 's/\\x\(.\{2\}\)/\\mybs{x\1}/' | \
		sed 's/ \\ / \\mybs{}/ ' | \
		sed 'N;s/\n//' | \
		awk '{printf "%10s & %10s & %20s & %10s & %10s & %20s \\\\\n", $$1, $$2, $$4, $$5, $$6, $$8}' >> $@; \
	echo "\\\end{tabular}" >> $@; \
	echo "\\\end{center}" >> $@; \
	echo "\\\end{frame}" >> $@; \
	for i in $$(ls *png); do \
		echo "\\\begin{frame}" >> $@; \
		echo "\\\begin{figure}" >> $@; \
		echo "    \includegraphics[height=8cm]{$$i}" >> $@; \
		echo "\\\end{figure}" >> $@; \
		echo "\\\end{frame}" >> $@; \
	done; \
	echo "\\\end{document}" >> $@; \

%.png: %.dot
	ccomps -x $< | dot -Goverlap=false | gvpack -Goverlap=false | neato $(DOTOPT) -n2 -s -Tpng -o $@

clean:
	-rm -rf *.png
	-rm -rf *.toc
	-rm -rf *.snm
	-rm -rf *.out
	-rm -rf *.aux
	-rm -rf *.log
	-rm -rf *.nav
	-rm -rf *.dot
	-rm -rf *.huf
	-rm -rf *.vrb
	-rm -rf *.pdf
	-rm -rf core
	-rm -rf *tmp *tmp2
