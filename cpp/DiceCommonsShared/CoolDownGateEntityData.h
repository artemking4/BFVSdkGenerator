// Object: CoolDownGateEntityData
// ClassId: 2551
// RuntimeId: 40316
// TypeInfo: 0x0000000144DB5C10
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DiceCommonsShared {
    class CoolDownGateEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 CoolDownTime; // 0x24
        Boolean StartOpened; // 0x28
        char pad_0x29[0x7];
    }; // 0x30
    static_assert(sizeof(CoolDownGateEntityData) == 0x30);
}
#pragma pack(pop)