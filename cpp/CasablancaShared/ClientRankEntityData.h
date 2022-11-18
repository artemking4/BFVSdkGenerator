// Object: ClientRankEntityData
// ClassId: 2506
// RuntimeId: 25597
// TypeInfo: 0x0000000144D13080
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Core/DataContainer.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ClientRankEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Core::DataContainer Identifier; // 0x28
    }; // 0x30
    static_assert(sizeof(ClientRankEntityData) == 0x30);
}
#pragma pack(pop)