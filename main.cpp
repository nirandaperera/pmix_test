#include <cassert>
#include <iostream>

#include <mpi.h>

int main(int argc, char **argv) {
  int rv = MPI_Init(&argc, &argv);
  assert(rv == MPI_SUCCESS);

  int size =0;
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  std::cout << "world " << size << std::endl;

  rv = MPI_Finalize();
  assert(rv == MPI_SUCCESS);
  return 0;
}
