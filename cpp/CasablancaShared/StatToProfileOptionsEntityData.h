// Object: StatToProfileOptionsEntityData
// ClassId: 3519
// RuntimeId: 11277
// TypeInfo: 0x0000000144DA09E0
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../DicePersistenceShared/StatReferenceObject.h"
#include "../DicePersistenceShared/PersistenceContextObject.h"
#include "../Global/CString.h"
#include "../Global/Boolean.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class StatToProfileOptionsEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        DicePersistenceShared::StatReferenceObject DynamicStatReference; // 0x28
        DicePersistenceShared::PersistenceContextObject TargetContext; // 0x30
        CString StatKey; // 0x38
        Boolean UsesDynamicInput; // 0x40
        char pad_0x41[0x7];
    }; // 0x48
    static_assert(sizeof(StatToProfileOptionsEntityData) == 0x48);
}
#pragma pack(pop)