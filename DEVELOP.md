# Instructions to build and develop eventlircd

## Prerequisites

```
sudo apt install gcc libudev-dev
```

**NOTE:** there are surely more dependencies which were already installed on my workstation, so I wouldn't know.

## Compile

```
autoreconf --install
mkdir build
cd build
../configure --sysconfdir=/etc
make
```

**TIP:** we use the build directory to avoid mixing generated and source files.

## Install

```
cd build
sudo make install [DESTDIR=...]
```
