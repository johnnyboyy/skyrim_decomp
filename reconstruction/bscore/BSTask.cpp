// Source exposure: mixed (names and declarations from community headers; the listing of the pinned
// image).
// Declarations derived from powerof3/CommonLibSSE are GPL-3.0 (its licence).
// Adapted bodies: none.
// 0xfc26e0 BSTask::GetDescription
// 0x19be50 BSTask::~BSTask
#include "BSTask.h"
#include <cstddef>
#include <string.h>

// Not compared: defined so that the compiler emits the vftable and, beside it, the
// deleting destructor that is compared (cookbook rule 14).
BSTask::BSTask()
{
}

// Writes the default description; returns false because a plain task has none of its own.
bool BSTask::GetDescription(char* a_dest, std::uint32_t a_maxCount)
{
    strncpy_s(a_dest, static_cast<rsize_t>(a_maxCount) + 1, "Unnamed", a_maxCount);
    return false;
}

