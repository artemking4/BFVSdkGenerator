// Object: RSPSettings
// ClassId: 5013
// RuntimeId: 50699
// TypeInfo: 0x0000000144D11F00
#include "../Core/SystemSettings.h"
#include "../CasablancaShared/MapRotationConfig.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class RSPSettings : public Core::SystemSettings {
        Array<CasablancaShared::MapRotationConfig> MapRotations; // 0x20
    }; // 0x28
    static_assert(sizeof(RSPSettings) == 0x28);
}
#pragma pack(pop)