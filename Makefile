SOURCE  = $(wildcard src/*.adoc)
PROJECT = riscv-vector-doc
DOC = $(PROJECT).html $(PROJECT).pdf

all: $(DOC)

$(PROJECT).html: $(SOURCE)
	asciidoctor -r asciidoctor-diagram src/riscv-vector-doc.adoc -b docbook5 -o $(PROJECT).docbook
	pandoc -s -f docbook $(PROJECT).docbook -o $(PROJECT).rst
	sphinx-build -b html . build

$(PROJECT).pdf: $(SOURCE)
	asciidoctor-pdf -r asciidoctor-diagram -a compress src/riscv-vector-doc.adoc -o $@

clean:
	rm -rf $(DOC)
