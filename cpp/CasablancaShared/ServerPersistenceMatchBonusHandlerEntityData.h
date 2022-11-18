// Object: ServerPersistenceMatchBonusHandlerEntityData
// ClassId: 3166
// RuntimeId: 20381
// TypeInfo: 0x0000000144D13880
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/MultiplierSet.h"
#include "../DicePersistenceShared/PersistenceCategorizationObject.h"
#include "../Global/CString.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class ServerPersistenceMatchBonusHandlerEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        Array<CasablancaShared::MultiplierSet> MultiplierSets; // 0x28
        DicePersistenceShared::PersistenceCategorizationObject GameMode; // 0x30
        CString GameSettingPrefix; // 0x38
    }; // 0x40
    static_assert(sizeof(ServerPersistenceMatchBonusHandlerEntityData) == 0x40);
}
#pragma pack(pop)