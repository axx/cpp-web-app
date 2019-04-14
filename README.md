# cpp-web-app
A web application using C++

To build:

```bash
$ docker run -it -v "$(pwd)/src":/src allister/cpp-web-dev:1.0.0 bash
$ mkdir -p /build
$ cd /build
$ cmake /src
$ cmake --build .
```

To run:

```bash
$ /build/cpp-web-app
```
