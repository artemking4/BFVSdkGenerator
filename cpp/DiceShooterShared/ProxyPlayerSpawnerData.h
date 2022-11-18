// Object: ProxyPlayerSpawnerData
// ClassId: 3076
// RuntimeId: 19161
// TypeInfo: 0x0000000144DECFA0
#include "../Entity/EntityData.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../GameShared/TeamId.h"
#include "../GameShared/SquadId.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class ProxyPlayerSpawnerData : public Entity::EntityData {
        CString PlayerName; // 0x20
        Uint32 MaxCount; // 0x28
        GameShared::TeamId Team; // 0x2C
        GameShared::SquadId Squad; // 0x30
        Float32 Throttle; // 0x34
        Float32 Yaw; // 0x38
        Float32 Aim; // 0x3C
        Float32 Strafe; // 0x40
        Float32 Pitch; // 0x44
        Float32 StaggerFireInterval; // 0x48
        Boolean Fire; // 0x4C
        char pad_0x4D[0x3];
    }; // 0x50
    static_assert(sizeof(ProxyPlayerSpawnerData) == 0x50);
}
#pragma pack(pop)