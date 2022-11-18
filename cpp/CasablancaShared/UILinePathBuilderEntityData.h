// Object: UILinePathBuilderEntityData
// ClassId: 3726
// RuntimeId: 25725
// TypeInfo: 0x0000000144D1FB70
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Uint32.h"
#include "../Global/Float32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UILinePathBuilderEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Uint32 InputCount; // 0x24
        Float32 LineWidth; // 0x28
        char pad_0x2C[0x4];
    }; // 0x30
    static_assert(sizeof(UILinePathBuilderEntityData) == 0x30);
}
#pragma pack(pop)