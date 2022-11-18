// Object: UISpectatorEntityData
// ClassId: 3768
// RuntimeId: 49973
// TypeInfo: 0x0000000144D20770
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UISpectatorEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(UISpectatorEntityData) == 0x28);
}
#pragma pack(pop)