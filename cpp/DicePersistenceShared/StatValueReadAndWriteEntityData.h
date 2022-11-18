// Object: StatValueReadAndWriteEntityData
// ClassId: 3520
// RuntimeId: 33474
// TypeInfo: 0x0000000144DC9E40
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DicePersistenceShared/StatReferenceObject.h"
#include "../Global/Int32.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace DicePersistenceShared {
    class StatValueReadAndWriteEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DicePersistenceShared::StatReferenceObject DynamicStatReference; // 0x28
        Int32 InputValue; // 0x30
        char pad_0x34[0x4];
        DicePersistenceShared::PersistenceContextObject TargetContext; // 0x38
        CString StatKey; // 0x40
        Boolean UsesDynamicInput; // 0x48
        char pad_0x49[0x7];
    }; // 0x50
    static_assert(sizeof(StatValueReadAndWriteEntityData) == 0x50);
}
#pragma pack(pop)