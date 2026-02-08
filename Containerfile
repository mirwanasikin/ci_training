# Stage 1 Build 
FROM gcc:latest AS build

WORKDIR /build

COPY src/main.c . 

RUN gcc -O2 -o main main.c

# Stage 2 Runtime
FROM scratch 

COPY --from=build /build/main /main 
