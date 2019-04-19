FROM allister/cpp-web-dev:latest as builder
COPY src/ /src/
WORKDIR /build
RUN cmake /src && cmake --build .

FROM allister/cpp-web-dev:lean-1.0.0
WORKDIR /app
COPY --from=builder /build/cpp-web-app .
CMD ["./cpp-web-app"]
