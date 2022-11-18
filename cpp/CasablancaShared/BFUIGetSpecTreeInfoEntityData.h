// Object: BFUIGetSpecTreeInfoEntityData
// ClassId: 2249
// RuntimeId: 6523
// TypeInfo: 0x0000000144D50AD0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/BFUISpecTreeInstanceObject.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIGetSpecTreeInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::BFUISpecTreeInstanceObject SpecTree; // 0x28
    }; // 0x30
    static_assert(sizeof(BFUIGetSpecTreeInfoEntityData) == 0x30);
}
#pragma pack(pop)