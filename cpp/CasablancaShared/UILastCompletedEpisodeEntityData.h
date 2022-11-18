// Object: UILastCompletedEpisodeEntityData
// ClassId: 3722
// RuntimeId: 18283
// TypeInfo: 0x0000000144D1F8F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UILastCompletedEpisodeEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UILastCompletedEpisodeEntityData) == 0x28);
}
#pragma pack(pop)