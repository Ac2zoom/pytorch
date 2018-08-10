#include "grad_mode.h"

namespace torch { namespace autograd {

thread_local bool GradMode_enabled = 1;

bool GradMode::is_enabled() {
  return GradMode_enabled;
}

void GradMode::set_enabled(bool enabled) {
  GradMode_enabled = enabled;
}
}}
