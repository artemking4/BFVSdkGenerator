// Object: BFTreadMarkSettings
// ClassId: 4964
// RuntimeId: 32219
// TypeInfo: 0x0000000144D30D20
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFTreadMarkSettings : public Core::SystemSettings {
        Float32 ErrorThreshold; // 0x20
        Uint32 ModifierUpdatesPerFrame; // 0x24
        Boolean Enable; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(BFTreadMarkSettings) == 0x30);
}
#pragma pack(pop)