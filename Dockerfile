FROM debian:11
WORKDIR /calc
RUN apt update && apt install g++ make
COPY main.cpp .
COPY Makefile .
RUN make
CMD ["./calc"]
