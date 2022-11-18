// Object: EmitterTag
// ClassId: 1541
// RuntimeId: 47251
// TypeInfo: 0x0000000144E2AB40
#include "../Core/DataContainer.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace Emitter {
    class EmitterTag : public Core::DataContainer {
        CString Name; // 0x18
    }; // 0x20
    static_assert(sizeof(EmitterTag) == 0x20);
}
#pragma pack(pop)