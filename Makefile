SOURCE  = $(wildcard src/*.adoc)
PROJECT = riscv-vector-doc
DOC = $(PROJECT).html $(PROJECT).pdf

all: $(DOC)

$(PROJECT).html: $(SOURCE)
	cd src/ && \
	asciidoctor \
		-a stylesheet=readthedocs.css \
		-r asciidoctor-diagram \
		riscv-vector-doc.adoc \
		-o ../riscv-vector-doc.html

$(PROJECT).pdf: $(SOURCE)
	asciidoctor-pdf -r asciidoctor-diagram -a compress src/riscv-vector-doc.adoc -o $@

clean:
	rm -rf $(DOC)
