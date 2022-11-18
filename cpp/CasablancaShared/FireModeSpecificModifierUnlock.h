// Object: FireModeSpecificModifierUnlock
// ClassId: 1431
// RuntimeId: 16351
// TypeInfo: 0x0000000144D40BD0
#include "../CasablancaShared/ContextSpecificModifierUnlock.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class FireModeSpecificModifierUnlock : public CasablancaShared::ContextSpecificModifierUnlock {
        Uint32 FireLogicTypesMask; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(FireModeSpecificModifierUnlock) == 0x30);
}
#pragma pack(pop)