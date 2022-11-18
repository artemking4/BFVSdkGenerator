// Object: PosesConfiguration
// ClassId: 5011
// RuntimeId: 34395
// TypeInfo: 0x0000000144E966B0
#include "../Core/SystemSettings.h"
#include "../GameShared/PosesGlobalAsset.h"

#pragma pack(push, 8)
namespace GameShared {
    class PosesConfiguration : public Core::SystemSettings {
        GameShared::PosesGlobalAsset PosesGlobalAsset; // 0x20
    }; // 0x28
    static_assert(sizeof(PosesConfiguration) == 0x28);
}
#pragma pack(pop)