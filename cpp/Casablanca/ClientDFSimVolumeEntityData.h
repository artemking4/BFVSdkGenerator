// Object: ClientDFSimVolumeEntityData
// ClassId: 2479
// RuntimeId: 9610
// TypeInfo: 0x0000000144C1DB00
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Core/Vec3.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../Casablanca/DFSimDebugSettings.h"
#include "../Global/CString.h"

#pragma pack(push, 16)
namespace Casablanca {
    class ClientDFSimVolumeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform BoxTransform; // 0x30
        Core::Vec3 BoxHalfExtents; // 0x70
        Core::Vec3 ShipDestructionMargin; // 0x80
        Core::Vec3 ProjectileDestructionMargin; // 0x90
        Core::Vec3 DebugColor; // 0xA0
        Uint32 MaxShips; // 0xB0
        Uint32 MaxProjectiles; // 0xB4
        Casablanca::DFSimDebugSettings DebugSettings; // 0xB8
        CString DebugName; // 0xC0
        Boolean EnableOnCreation; // 0xC8
        Boolean ShowInWorldDebug; // 0xC9
        Boolean ShowDebugInfo; // 0xCA
        char pad_0xCB[0x5];
    }; // 0xD0
    static_assert(sizeof(ClientDFSimVolumeEntityData) == 0xD0);
}
#pragma pack(pop)