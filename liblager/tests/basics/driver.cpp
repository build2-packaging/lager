#include <lager/state.hpp>

#undef NDEBUG
#include <cassert>

int
main ()
{

  // Smoke test.
  //
  // State management.
  //
  auto s (lager::make_state (42));
  assert (s.get () == 42);

  s.set (100);
  commit (s);
  assert (s.get () == 100);
}
