// Object: BFUISingleplayerProgressEntityData
// ClassId: 2380
// RuntimeId: 29116
// TypeInfo: 0x0000000144D43AD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUISingleplayerProgressEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFUISingleplayerProgressEntityData) == 0x28);
}
#pragma pack(pop)