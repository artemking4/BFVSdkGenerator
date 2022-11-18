// Object: BFRefCountEntityData
// ClassId: 2116
// RuntimeId: 2663
// TypeInfo: 0x0000000144D31520
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFRefCountEntityAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFRefCountEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFRefCountEntityAsset Asset; // 0x28
    }; // 0x30
    static_assert(sizeof(BFRefCountEntityData) == 0x30);
}
#pragma pack(pop)