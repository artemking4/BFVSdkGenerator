// Object: ServerSoldierSettings
// ClassId: 5021
// RuntimeId: 34351
// TypeInfo: 0x0000000144F454B0
#include "../Core/SystemSettings.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace SoldierShared {
    class ServerSoldierSettings : public Core::SystemSettings {
        Float32 BulletDamageScale; // 0x20
        Float32 PlayerHealthScale; // 0x24
    }; // 0x28
    static_assert(sizeof(ServerSoldierSettings) == 0x28);
}
#pragma pack(pop)