#include <mpi.h>
#include <unistd.h>
#include <iostream>

int main(int argc, char*argv[]) {
    
    MPI_Init (&argc, &argv);
    
    int process_ID, total_processes;
    
    MPI_Comm_size(MPI_COMM_WORLD, &total_processes);
    //MPI_Comm_rank(MPI_COMM_WORLD, &process_ID)
    
    char name[256];
    int result = gethostname(name, sizeof(name));
    
    
    std::cout << "I am process " << getpid() << " out of " << totoal_processes <<
    ". I am running on " << name <<
    std::endl;
    MPI_Finalize();
}
