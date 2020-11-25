// Pingpong: pid 0 sends a counter to pid 1. Pid 1 increments it, and sends it back. pid 0 prints it
// NPINGPONG: Number of ping pong interchange

#include <iostream>
#include <numeric>
#include <cstdlib>
#include "mpi.h"

int main(int argc, char **argv)
{
  MPI_Init(&argc, &argv);
  const int NPINGPONG = std::atoi(argv[1]);
  int pid = 0, nproc = 0;

  MPI_Comm_rank(MPI_COMM_WORLD, &pid);
  MPI_Comm_size(MPI_COMM_WORLD, &nproc);


  MPI_Finalize();
  return 0;
}

