# cmake-test

Simple project to test [CMake](https://cmake.org/) features.

## Build

### CMake

Required version of cmake is __3.0.2__. To test current installed version of cmake do:

```
cmake --version
```

If an older version of cmake is installed do:

```
cd cmake
tar -xvf cmake-3.0.2.tar.gz
cd cmake-3.0.2
./bootstrap && make
```

Optionally one can install cmake compiled version system wide:

```
sudo make install
```

### Source

After compiling - or installing - cmake v3.0.2 or newer to compile source code do:

```
mkdir build
cd build
<PATH_TO_CMAKE_BIN>/cmake ..
make
make DESTDIR=. install
```

## Run

To run generated executable do:

```
cd build # only if not already there
export LD_LIBRARY_PATH=$(pwd)/usr/local/lib
./usr/local/bin/app
```

## License

[MIT](LICENSE)

## Author

Ruben O. Chiavone
