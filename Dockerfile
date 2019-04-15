FROM allister/cpp-web-dev:1.0.0 as builder
COPY src/* /src/
WORKDIR /build
RUN cmake /src && cmake --build .

FROM ubuntu:18.04
WORKDIR /app
COPY --from=builder /build/cpp-web-app .
CMD ["./cpp-web-app"]
