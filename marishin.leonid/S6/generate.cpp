#include "generate.hpp"
#include <cstdlib>

float marishin::detail::randomNumber(std::default_random_engine& generate, float)
{
  std::uniform_real_distribution< float > dis(-1000, 1000);
  return dis(generate);
}
