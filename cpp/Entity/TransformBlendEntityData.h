// Object: TransformBlendEntityData
// ClassId: 3587
// RuntimeId: 37564
// TypeInfo: 0x0000000144EE4DD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Core/LinearTransform.h"

#pragma pack(push, 16)
namespace Entity {
    class TransformBlendEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform In1; // 0x30
        Core::LinearTransform In2; // 0x70
        Float32 BlendValue; // 0xB0
        Float32 BlendValue2; // 0xB4
        char pad_0xB8[0x8];
    }; // 0xC0
    static_assert(sizeof(TransformBlendEntityData) == 0xC0);
}
#pragma pack(pop)