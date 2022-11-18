// Object: BFUIProfileOptionColorStringToVec4EntityData
// ClassId: 2350
// RuntimeId: 3692
// TypeInfo: 0x0000000144D87D20
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../GameShared/ProfileOptionData.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFUIProfileOptionColorStringToVec4EntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        GameShared::ProfileOptionData Option; // 0x28
        CString ValueToConvert; // 0x30
    }; // 0x38
    static_assert(sizeof(BFUIProfileOptionColorStringToVec4EntityData) == 0x38);
}
#pragma pack(pop)