removing() {
    rm $1 && echo "success removing "$1 || echo "error removing "$1
}

find . -type f -name "*.exe" | while read FILE; do removing $FILE; done
