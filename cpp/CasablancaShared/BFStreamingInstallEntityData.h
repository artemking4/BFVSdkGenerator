// Object: BFStreamingInstallEntityData
// ClassId: 2147
// RuntimeId: 49937
// TypeInfo: 0x0000000144D5B160
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFStreamingInstallEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
    }; // 0x28
    static_assert(sizeof(BFStreamingInstallEntityData) == 0x28);
}
#pragma pack(pop)