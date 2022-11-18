// Object: UITeamEntityData
// ClassId: 3779
// RuntimeId: 17679
// TypeInfo: 0x0000000144D20DF0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UITeamEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UITeamEntityData) == 0x28);
}
#pragma pack(pop)