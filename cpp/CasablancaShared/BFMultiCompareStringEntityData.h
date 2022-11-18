// Object: BFMultiCompareStringEntityData
// ClassId: 2103
// RuntimeId: 5960
// TypeInfo: 0x0000000144D4B6F0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Uint32.h"
#include "../Global/Boolean.h"
#include "../CasablancaShared/StringCompareType.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class BFMultiCompareStringEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString Input; // 0x28
        Uint32 CompareCount; // 0x30
        CasablancaShared::StringCompareType CompareType; // 0x34
        Boolean TriggerOnPropertyChange; // 0x38
        Boolean TriggerOnUpdated; // 0x39
        char pad_0x3A[0x6];
    }; // 0x40
    static_assert(sizeof(BFMultiCompareStringEntityData) == 0x40);
}
#pragma pack(pop)