// Object: UINearbyMedicsDataProviderEntityData
// ClassId: 3738
// RuntimeId: 61553
// TypeInfo: 0x0000000144D86C20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UINearbyMedicsDataProviderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 SearchDistance; // 0x24
        Int32 MaxCount; // 0x28
        Boolean OnlyCareWhenDead; // 0x2C
        Boolean CollectLetMeRevive; // 0x2D
        Boolean CollectNoLetMeRevive; // 0x2E
        Boolean CollectSquadMembers; // 0x2F
    }; // 0x30
    static_assert(sizeof(UINearbyMedicsDataProviderEntityData) == 0x30);
}
#pragma pack(pop)