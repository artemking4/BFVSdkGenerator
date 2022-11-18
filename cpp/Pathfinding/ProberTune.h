// Object: ProberTune
// ClassId: 665
// RuntimeId: 42348
// TypeInfo: 0x0000000144EAA7F0
#include "../Core/Asset.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace Pathfinding {
    class ProberTune : public Core::Asset {
        Float32 probeInterval; // 0x20
        Boolean probeForGround; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(ProberTune) == 0x28);
}
#pragma pack(pop)