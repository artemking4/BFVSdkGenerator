// Object: UIOperationInfoEntityData
// ClassId: 3748
// RuntimeId: 22207
// TypeInfo: 0x0000000144D14380
#include "../Entity/EntityData.h"
#include "../Core/Realm.h"
#include "../CasablancaShared/OperationsDescriptionAsset.h"
#include "../CasablancaShared/BFUIMapList.h"

#pragma pack(push, 8)
namespace CasablancaShared {
    class UIOperationInfoEntityData : public Entity::EntityData {
        Core::Realm Realm; // 0x20
        char pad_0x24[0x4];
        CasablancaShared::OperationsDescriptionAsset OperationsDescription; // 0x28
        CasablancaShared::BFUIMapList DisabledMaps; // 0x30
    }; // 0x38
    static_assert(sizeof(UIOperationInfoEntityData) == 0x38);
}
#pragma pack(pop)