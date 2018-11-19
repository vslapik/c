#DOTOPT := -Gsize=11.7,8.2 -Gratio=fill
DOTOPT := -Gsize=13,9 -Gdpi=300 -Goverlap=false
DOCUMENT := practice.pdf
DOCUMENT_TEX := practice.tex
IMAGES = $(patsubst %.dot, %.png, $(DOTS))
DOTS = $(wildcard *.dot)


$(DOCUMENT): $(DOCUMENT_TEX)
	pdflatex $<

all:
	./huff text -c out --dump-tree --dump-table > text.log
	make
	-rm out

pdf: $(DOCUMENT)

debug:
	echo '\\textbf{code} & \\texbf{frequency} & \\textbf{huffman} & \\textbf{code} & \\texbf{frequency} & \\texbf{huffman} \\' >> $@; \


$(DOCUMENT_TEX): Makefile $(IMAGES)
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
	cat text.log | sed '$$d' | sed '$$d' | sed '1d' | \
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
	-rm -rf  $(DOCUMENT)
