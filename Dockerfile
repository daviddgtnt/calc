FROM debian:11
WORKDIR /calc
RUN apt-get update && apt-get install -y g++ make
COPY main.cpp .
COPY Makefile .
RUN make
CMD ["./calc"]
