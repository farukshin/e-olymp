from="./bootstrap"
cppfile=./problems/$1/$1.cpp

error() {
    echo "Ошибка создания каталога "$1
    exit 1
}

success() {
    echo "create "$1
    exit 0
}

if [ -z $1 ]; then
    echo "Не задан параметр" && exit 1
fi

cp -r $from ./problems/$1 &&
    mv ./problems/$1/bootstrap.cpp $cppfile &&
    sed -i 's_^\(//https://www.e-olymp.com/ru/problems/\)$_\1'$1'_g' $cppfile &&
    success $cppfile || error $1
