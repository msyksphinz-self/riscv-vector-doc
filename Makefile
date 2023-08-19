SOURCE  = $(wildcard src/*.adoc)
PROJECT = riscv-vector-doc
DOC = $(PROJECT).html $(PROJECT).pdf

all: $(DOC)

$(PROJECT).html: $(SOURCE)
	cd src/ && \
	asciidoctor \
		-a stylesdir="$(PWD)/src/readthedocs/" \
		-a sytlesheet=readthedocs.css \
		-r asciidoctor-diagram \
		riscv-vector-doc.adoc
# -o $(PROJECT).html

# 	pandoc -s -f docbook $(PROJECT).docbook -o $(PROJECT).rst
# 	sphinx-build -b html . build

$(PROJECT).pdf: $(SOURCE)
	asciidoctor-pdf -r asciidoctor-diagram -a compress src/riscv-vector-doc.adoc -o $@

clean:
	rm -rf $(DOC)
