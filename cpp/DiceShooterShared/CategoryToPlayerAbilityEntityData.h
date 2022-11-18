// Object: CategoryToPlayerAbilityEntityData
// ClassId: 2465
// RuntimeId: 61279
// TypeInfo: 0x0000000144DF8340
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../DiceShooterShared/PlayerAbilityCategory.h"

#pragma pack(push, 8)
namespace DiceShooterShared {
    class CategoryToPlayerAbilityEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        DiceShooterShared::PlayerAbilityCategory Category; // 0x24
        Boolean ClearControllableOnExit; // 0x28
        Boolean ReadQueryFromEnd; // 0x29
        char pad_0x2A[0x6];
    }; // 0x30
    static_assert(sizeof(CategoryToPlayerAbilityEntityData) == 0x30);
}
#pragma pack(pop)