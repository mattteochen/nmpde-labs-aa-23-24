#include <fstream>
#include <iostream>
#include <vector>

#include "Poisson3D.hpp"

// Main function.
int
main(int /*argc*/, char * /*argv*/[])
{
  const std::string mesh_file_name =
    "../mesh/mesh-cube-5.msh";
  const unsigned int r = 1;

  Poisson3D problem(mesh_file_name, r);

  problem.setup();
  problem.assemble();
  problem.solve();
  problem.output();

  return 0;
}
