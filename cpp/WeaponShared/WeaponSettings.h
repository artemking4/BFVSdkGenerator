// Object: WeaponSettings
// ClassId: 5042
// RuntimeId: 38673
// TypeInfo: 0x0000000144F79E60
#include "../Core/SystemSettings.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace WeaponShared {
    class WeaponSettings : public Core::SystemSettings {
        Float32 ProjectileCullingHeightPadding; // 0x20
        Boolean EnableProjectileCulling; // 0x24
        char pad_0x25[0x3];
    }; // 0x28
    static_assert(sizeof(WeaponSettings) == 0x28);
}
#pragma pack(pop)