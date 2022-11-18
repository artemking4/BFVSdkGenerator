// Object: BFRefCountAcquireReleaseEntityData
// ClassId: 2115
// RuntimeId: 39740
// TypeInfo: 0x0000000144D315A0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFRefCountEntityAsset.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFRefCountAcquireReleaseEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFRefCountEntityAsset Asset; // 0x28
    }; // 0x30
    static_assert(sizeof(BFRefCountAcquireReleaseEntityData) == 0x30);
}
#pragma pack(pop)