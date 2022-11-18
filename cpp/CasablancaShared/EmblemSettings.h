// Object: EmblemSettings
// ClassId: 4982
// RuntimeId: 34445
// TypeInfo: 0x0000000144D0C030
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Core/PlatformScalableInt.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class EmblemSettings : public Core::SystemSettings {
        Core::PlatformScalableInt EmblemSize; // 0x20
        Boolean Enable; // 0x44
        char pad_0x45[0x3];
    }; // 0x48
    static_assert(sizeof(EmblemSettings) == 0x48);
}
#pragma pack(pop)