// Object: AffectorQueryFilterEntityData
// ClassId: 2029
// RuntimeId: 49646
// TypeInfo: 0x0000000144DF3770
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceShooterShared/QueryEntityResult.h"
#include "../Global/Uint32.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class AffectorQueryFilterEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DiceShooterShared::QueryEntityResult EntitiesToFilter; // 0x28
        Array<Uint32> DescriptorIds; // 0x38
    }; // 0x40
    static_assert(sizeof(AffectorQueryFilterEntityData) == 0x40);
}
#pragma pack(pop)