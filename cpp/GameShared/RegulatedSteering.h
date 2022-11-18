// Object: RegulatedSteering
// ClassId: 4564
// RuntimeId: 61377
// TypeInfo: 0x0000000144E81040
#include "../Core/DataContainer.h"
#include "../GameShared/PID.h"

#pragma pack(push, 8)
namespace GameShared {
    class RegulatedSteering : public Core::DataContainer {
        GameShared::PID PID; // 0x18
    }; // 0x38
    static_assert(sizeof(RegulatedSteering) == 0x38);
}
#pragma pack(pop)