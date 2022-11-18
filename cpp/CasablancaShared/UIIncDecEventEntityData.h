// Object: UIIncDecEventEntityData
// ClassId: 3718
// RuntimeId: 63661
// TypeInfo: 0x0000000144D1F770
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Float32.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIIncDecEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Float32 FloatValue; // 0x24
        Int32 IntValue; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(UIIncDecEventEntityData) == 0x30);
}
#pragma pack(pop)