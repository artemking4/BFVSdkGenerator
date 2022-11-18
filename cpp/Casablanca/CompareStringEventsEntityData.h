// Object: CompareStringEventsEntityData
// ClassId: 2528
// RuntimeId: 47512
// TypeInfo: 0x0000000144C83440
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace Casablanca {
    class CompareStringEventsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString In; // 0x28
        Array<CString> Tokens; // 0x30
        Boolean AutoReset; // 0x38
        char pad_0x39[0x7];
    }; // 0x40
    static_assert(sizeof(CompareStringEventsEntityData) == 0x40);
}
#pragma pack(pop)