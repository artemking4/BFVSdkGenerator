// Object: TransformModifierEntityData
// ClassId: 3591
// RuntimeId: 48950
// TypeInfo: 0x0000000144EE4650
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/LinearTransform.h"
#include "../Entity/ModifierAxis.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace Entity {
    class TransformModifierEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0xC];
        Core::LinearTransform In; // 0x30
        Entity::ModifierAxis Left; // 0x70
        Entity::ModifierAxis Up; // 0x74
        Entity::ModifierAxis Forward; // 0x78
        Boolean InvertFullTransform; // 0x7C
        Boolean InvertLeft; // 0x7D
        Boolean InvertUp; // 0x7E
        Boolean InvertForward; // 0x7F
        Boolean InvertTranslation; // 0x80
        char pad_0x81[0xF];
    }; // 0x90
    static_assert(sizeof(TransformModifierEntityData) == 0x90);
}
#pragma pack(pop)