// Object: ArtilleryAimingComponentData
// ClassId: 1717
// RuntimeId: 47330
// TypeInfo: 0x0000000144C7D200
#include "../Entity/GameComponentData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Casablanca {
    class ArtilleryAimingComponentData : public Entity::GameComponentData {
        Core::LinearTransform ShootSpaceTransform; // 0x80
        Core::Realm Realm; // 0xC0
        char pad_0xC4[0xC];
    }; // 0xD0
    static_assert(sizeof(ArtilleryAimingComponentData) == 0xD0);
}
#pragma pack(pop)