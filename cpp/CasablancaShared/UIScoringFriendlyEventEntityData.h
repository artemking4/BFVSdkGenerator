// Object: UIScoringFriendlyEventEntityData
// ClassId: 3757
// RuntimeId: 7904
// TypeInfo: 0x0000000144D43E50
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIScoringFriendlyEventEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UIScoringFriendlyEventEntityData) == 0x28);
}
#pragma pack(pop)