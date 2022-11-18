// Object: BFUIPadRosterListEntityData
// ClassId: 2330
// RuntimeId: 17795
// TypeInfo: 0x0000000144D81BA0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIPadRosterListEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString ListObjectType; // 0x28
        Int32 MinListSize; // 0x30
        Int32 Columns; // 0x34
    }; // 0x38
    static_assert(sizeof(BFUIPadRosterListEntityData) == 0x38);
}
#pragma pack(pop)