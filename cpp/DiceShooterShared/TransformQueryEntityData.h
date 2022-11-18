// Object: TransformQueryEntityData
// ClassId: 3593
// RuntimeId: 39567
// TypeInfo: 0x0000000144DF1350
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DiceCommonsShared/EntityTransformLinkData.h"
#include "../DiceShooterShared/TransformQueryType.h"
#include "../Global/Int32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class TransformQueryEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DiceCommonsShared::EntityTransformLinkData EntityType; // 0x28
        DiceShooterShared::TransformQueryType QueryType; // 0x30
        Int32 QueryFromIndex; // 0x34
        Boolean AlwaysEnabled; // 0x38
        Boolean SendOutputOnReceiveInput; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(TransformQueryEntityData) == 0x40);
}
#pragma pack(pop)