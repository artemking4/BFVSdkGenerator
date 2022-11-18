// Object: CategorizationEntityData
// ClassId: 2464
// RuntimeId: 26393
// TypeInfo: 0x0000000144DA3300
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../Global/CString.h"
#include "../DicePersistenceShared/PersistenceCategorizationData.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class CategorizationEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CString Identifier; // 0x28
        DicePersistenceShared::PersistenceCategorizationData CategorizationData; // 0x30
    }; // 0x38
    static_assert(sizeof(CategorizationEntityData) == 0x38);
}
#pragma pack(pop)