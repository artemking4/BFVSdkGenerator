// Object: MathEntityData
// ClassId: 2880
// RuntimeId: 34770
// TypeInfo: 0x0000000144EE5BD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Boolean.h"
#include "../Entity/MathEntityAssembly.h"

#pragma pack(push, 8)
namespace Entity {
    class MathEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Entity::MathEntityAssembly Assembly; // 0x28
        Boolean EvaluateOnEvent; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(MathEntityData) == 0x40);
}
#pragma pack(pop)