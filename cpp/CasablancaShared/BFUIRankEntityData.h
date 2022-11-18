// Object: BFUIRankEntityData
// ClassId: 2366
// RuntimeId: 34833
// TypeInfo: 0x0000000144D81C20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"
#include "../Core/DataContainer.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIRankEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString UIObjectType; // 0x28
        Core::DataContainer GlobalPlayerRankIdentifier; // 0x30
        Boolean GlobalPlayerRank; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(BFUIRankEntityData) == 0x40);
}
#pragma pack(pop)