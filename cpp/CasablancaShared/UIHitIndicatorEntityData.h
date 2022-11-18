// Object: UIHitIndicatorEntityData
// ClassId: 3716
// RuntimeId: 51725
// TypeInfo: 0x0000000144D437D0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIHitIndicatorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIHitIndicatorEntityData) == 0x28);
}
#pragma pack(pop)