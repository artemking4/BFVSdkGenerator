// Object: UIMetadataBlueprintEntityData
// ClassId: 3475
// RuntimeId: 32955
// TypeInfo: 0x0000000144D97310
#include "../Entity/SpatialEntityData.h"
#include "../Core/Realm.h"
#include "../Global/Int32.h"
#include "../Global/Guid.h"
#include "../Global/CString.h"
#include "../Core/LinearTransform.h"
#include "../Global/Boolean.h"

#pragma pack(push, 16)
namespace CasablancaShared {
    class UIMetadataBlueprintEntityData : public Entity::SpatialEntityData {
        Core::LinearTransform RootTransform; // 0x60
        Core::Realm Realm; // 0xA0
        Int32 UnlockIdentifier; // 0xA4
        Guid UnlockGuid; // 0xA8
        CString BundleId; // 0xB8
        Boolean Enabled; // 0xC0
        char pad_0xC1[0xF];
    }; // 0xD0
    static_assert(sizeof(UIMetadataBlueprintEntityData) == 0xD0);
}
#pragma pack(pop)