// Object: UIObjectivesEntityData
// ClassId: 3746
// RuntimeId: 12423
// TypeInfo: 0x0000000144D20870
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIObjectivesEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIObjectivesEntityData) == 0x28);
}
#pragma pack(pop)