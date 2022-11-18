// Object: MinimapSettings
// ClassId: 4999
// RuntimeId: 65200
// TypeInfo: 0x0000000144CFB850
#include "../Core/SystemSettings.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class MinimapSettings : public Core::SystemSettings {
        Float32 MipBias; // 0x20
        Float32 TileFadeInSpeed; // 0x24
        Float32 TileFadeOutSpeed; // 0x28
        Boolean UseSparseMipRange; // 0x2C
        char pad_0x2D[0x3];
    }; // 0x30
    static_assert(sizeof(MinimapSettings) == 0x30);
}
#pragma pack(pop)