// Object: UINPXPersistenceData
// ClassId: 3735
// RuntimeId: 6744
// TypeInfo: 0x0000000144C7F680
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../Global/Int32.h"

#pragma pack(push, 8)
namespace Casablanca {
    class UINPXPersistenceData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString MessageId; // 0x28
        Int32 NrOfTimesToShow; // 0x30
        char pad_0x34[0x4];
    }; // 0x38
    static_assert(sizeof(UINPXPersistenceData) == 0x38);
}
#pragma pack(pop)