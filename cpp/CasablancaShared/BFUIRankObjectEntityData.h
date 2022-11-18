// Object: BFUIRankObjectEntityData
// ClassId: 2367
// RuntimeId: 49406
// TypeInfo: 0x0000000144D84BA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../CasablancaShared/BFUIRankStruct.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIRankObjectEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        Int32 Rank; // 0x24
        CasablancaShared::BFUIRankStruct StaticRank; // 0x28
        char pad_0x3C[0x4];
    }; // 0x40
    static_assert(sizeof(BFUIRankObjectEntityData) == 0x40);
}
#pragma pack(pop)